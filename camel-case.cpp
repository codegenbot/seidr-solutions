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
Given the stock price for certain months and their corresponding change in prices over a week (calculated via normal regression), derive a function that can compute the minimum amount of money necessary to reach the desired profit. Given a starting balance of 0 and a target balance, choose "buys" of stock that will allow you to make the most profit without going over the target. For example: int stockPrices[1..10] = {5,8,12,4,9,8,7,19,1,2} int weeksChange[1..10] = {0, 4, 2, 1, 5, -1, -3, 6, 1,4} int balance = 30 int curBalance = 0 int profit = 0 while (curBalance < balance) { makeCurProfitBest(); profit += curStockGain}  For the above example, you would first choose to make a buy when the price is 12. Then you would purchase 19, then 2, then finally 5. As long as every week you make these purchases in an array [B1, B2, B3...], s: curBalance = B1 + B2 + B3 + curStockGain  for i: curValueofStock = s[i] s[i + 4] = s[i] + s.weeksChangel[i + 4] for j: curStockGain = (sum[i + 4,j +5]) + curStockGain

*/
int main() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	int res = 0;
	for (int i = 1; i < n; i++) {
		if (nums[i] < nums[i - 1]) {
			res += nums[i - 1] - nums[i];
			nums[i] = nums[i - 1];
		}
	}
	cout << res << endl;
	return 0;
}
