/*
Given an unsigned integer n, store it in a suitable container of your choice.
Notice that n holds only undecimal digits (in the range [0,9]).
Return a vector of numbers such that each number is equal to the total number
of occurrences of the digit it represents in n.

Examples:
    Input: n = 24665
    Output: {2, 0, 1, 0, 0, 0, 0, 0, 0, 0}

    Input: n = 2345567
    Output: {0, 2, 1, 2, 1, 0, 0, 1, 0, 0}

Constraints:
    1. 1 <= len(arr) <= 100
    2. 1 <= k <= len(arr)
*/
#include<stdio.h>
#include<vector>
using namespace std;
int add_elements(vector<int> arr,int k){
