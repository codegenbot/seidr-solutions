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
#include <numeric>
using namespace std;
int add_elements(vector<int> arr,int k){
#include<stdio.h>
#include<vector>
    int sum=0;
    for(int i=0;i<k;i++){
        if(arr[i]<100 && arr[i]>9){
            sum+=arr[i];
        }
    }
    return sum;
}
using namespace std;
int add_elements(vector<int> arr,int k){
