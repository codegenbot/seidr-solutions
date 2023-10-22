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
	int n;
	cin >> n;
	int mid = n / 2;
	int end = n - 1;
	int left = mid - 1;
	int right = mid;
	int sumLeft = 0;
	int sumRight = 0;
	while (left >= 0 && right <= end) {
		sumLeft += left;
		sumRight += right;
		if (sumLeft == sumRight) {
			break;
		} else if (sumLeft < sumRight) {
			left--;
		} else {
			right++;
		}
	}
	for (int i = 0; i <= left; i++) {
		cout << i << endl;
	}
	for (int i = left + 1; i <= right; i++) {
		cout << i << endl;
	}
	for (int i = right + 1; i <= end; i++) {
		cout << i << endl;
	}
	return 0;
}
