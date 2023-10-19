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
You will be given a list of integers, If there are two or more integers with the same value they will be stacked.
Example Input:
1 1 4 3 6 4 2
1 becomes a "stack" with two 1's
4 becomes a "stack" with two 4's
​
Output:
1*2 4*2 3 6 2
​
Once the integers are "stacked" everything is printed to the console.
For example,
append these to a string, print the out to the console.
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
