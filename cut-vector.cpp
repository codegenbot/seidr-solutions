#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs. Make sure that
For example,
input:
16
7204 177 9864 9810 7889 1992 964 8202 8693 5578 3248 3341 8632 9231 1424 4296
output:
8
7204 177 9864 9810 7889 1992 964 8202
input:
8
8693 5578 3248 3341 8632 9231 1424 4296
output:
8
8693 5578 3248 3341 8632 9231 1424 4296
*/
int solve(vector<int> &nums, int start, int end) {
    if(start == end) {
        return 0;
    }
    int sum = 0;
    for(int i = start; i <= end; i++) {
        sum += nums[i];
    }
    int left = sum, right = 0;
    int ans = INT_MAX;
    int mid = start;
    for(int i = start; i < end; i++) {
        left -= nums[i];
        right += nums[i];
        if(abs(left - right) < ans) {
            ans = abs(left - right);
            mid = i;
        }
    }
    return mid;
}
int main() {
    int n;
    while(cin >> n) {
        vector<int> nums;
        int num;
        for(int i = 0; i < n; i++) {
            cin >> num;
            nums.push_back(num);
        }
        int mid = solve(nums, 0, nums.size() - 1);
        cout << mid - 0 + 1 << endl;
        for(int i = 0; i <= mid; i++) {
            cout << nums[i] << " ";
        }
        cout << endl;
        cout << n - mid - 1 << endl;
        for(int i = mid + 1; i < n; i++) {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
