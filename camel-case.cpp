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
5 16
1 2 3 7 5
1 2 3 4 5
4 15
1 4 5 9 10
2 3 5 7 9
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
