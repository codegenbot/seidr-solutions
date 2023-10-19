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
Given a vector of positive integers, return a vector of the leaders in that vector. A leader is deﬁned as a number that is greater than or equal to all the numbers tothe right of it. The rightmost element is always a leader.
For example,
input:
0

output:
0

input:
1
0
output:
1
0
input:
1
451
output:
1
451
input:
2
1000 0
output:
2
1000 0
input:
2
0 1000
output:
1
1000
*/
int main() {
	int n = 5;
	vector<int> vi = {3, 5, -1, -6, -12, 34, 0, 1, 4, 6};
	vector<int> leader;
	int max = INT_MIN;
	for (int i = vi.size() - 1; i >= 0; --i) {
		if (vi[i] >= max) {
			max = vi[i];
			leader.push_back(vi[i]);
		}
	}

	for (int i = leader.size() - 1; i >= 0; --i) {
		cout << leader[i] << " ";
	}
	return 0;
}
