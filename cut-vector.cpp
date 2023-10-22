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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
For example,
input:
1
0
output:
1
0
0

input:
1
10
output:
1
10
0

input:
1
100
output:
1
100
0

input:
1
1000
output:
1
1000
0

input:
1
10000
output:
1
10000
0

*/
int main() {
	vector<int> nums;
	int n;
	while (cin >> n) {
		nums.push_back(n);
	}
	int l = 0, r = nums.size() - 1;
	int suml = nums[l], sumr = nums[r];
	int diff = abs(suml - sumr);
	int diffl = l, diffr = r;
	while (l <= r) {
		if (suml < sumr) {
			l++;
			suml += nums[l];
		}
		else if (suml > sumr) {
			r--;
			sumr += nums[r];
		}
		else {
			diff = 0;
			diffl = l;
			diffr = r;
			break;
		}
		int currDiff = abs(suml - sumr);
		if (currDiff < diff) {
			diff = currDiff;
			diffl = l;
			diffr = r;
		}
	}
	for (int i = 0; i <= diffl; i++) {
		cout << nums[i] << endl;
	}
	for (int i = diffr; i < nums.size(); i++) {
		cout << nums[i] << endl;
	}
	return 0;
}
