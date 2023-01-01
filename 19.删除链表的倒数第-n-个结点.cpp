/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第 N 个结点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include<bits/stdc++.h>
using namespace std;
//链表定义
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dump = new ListNode(0,head);
        ListNode* end = dump;
        while(n>0){
            end = end->next;
            n--;
        }
        ListNode* temp = dump;
        while(end->next!=nullptr){
            end = end->next;
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return dump->next;
    }
};
// @lc code=end

int main(){
    Solution s;
    ListNode head (1,nullptr);
    ListNode* ans = s.removeNthFromEnd(&head,1);
    if(ans == nullptr){
        cout<<"yes"<<endl;
    }
    return 0;
}

