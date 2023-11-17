/*
Given a non-empty vector of integers arr and an integer k, return
the sum of the elements with at most two digits from the first k elements of arr.

Example:

    Input: arr = {111,21,3,4000,5,6,7,8,9}, k = 4
    Output: 24 # sum of 21 + 3

Constraints:
    1. 1 <= len(arr) <= 100
    2. 1 <= k <= len(arr)
*/
#include<stdio.h>
#include<vector>
    int count;
    for (int i = 0; i < arr.size(); i++){
        if (arr[i] > 0 && arr[i] <= 99) {
            count = count + arr[i];
        }
        if (i == k - 1) {
            break;
        }
    };
    return count;
}
using namespace std;
int add_elements(vector<int> arr,int k){
