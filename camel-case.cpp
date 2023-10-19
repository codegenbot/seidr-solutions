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
Given an unsorted array of integers, find the length of longest increasing subsequence.
For example,
Given [10, 9, 2, 5, 3, 7, 101, 18],
The longest increasing subsequence is [2, 3, 7, 101], therefore the length is 4. Note that there may be more than one LIS combination, it is only necessary for you to return the length.
Your algorithm should run in O(n2) complexity.
Follow up: Could you improve it to O(n log n) time complexity?
*/
int main() {
	//int n;
	//cin >> n;
	//vector<int> nums(n);
	//for (int i = 0; i < n; i++) {
	//	cin >> nums[i];
	//}
	//int res = 0;
	//for (int i = 1; i < n; i++) {
	//	if (nums[i] < nums[i - 1]) {
	//		res += nums[i - 1] - nums[i];
	//		nums[i] = nums[i - 1];
	//	}
	//}
	//cout << res << endl;
	int n;
	cin >> n;
	vector<int> nums;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		nums.push_back(tmp);
	}
	if (n == 0) {
		cout << 0 << endl;
		return 0;
	}
	vector<int> dp(n, 1);
	int res = 1;
	for (int i = 1; i < n; ++i) {
		for (int j = 0; j < i; ++j) {
			if (nums[i] > nums[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		res = max(res, dp[i]);
	}
	cout << res << endl;
	return 0;
}
