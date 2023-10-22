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
	int s = 0, e = 0;
	vector<int> v;
	int sum = 0;
	while (n--) {
		int t;
		cin >> t;
		sum += t;
		v.push_back(t);
	}
	int mn = INT_MAX;
	for (int i = 0; i < v.size(); i++) {
		int l = 0, r = 0;
		for (int j = 0; j <= i; j++)
			l += v[j];
		for (int j = i + 1; j < v.size(); j++)
			r += v[j];
		if (abs(l - r) < mn) {
			mn = abs(l - r);
			s = i;
		}
	}
	for (int i = 0; i <= s; i++)
		cout << v[i] << " ";
	cout << endl;
	for (int i = s + 1; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
	return 0;
}
