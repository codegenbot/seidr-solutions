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



input:
5
1
2
3
4
5
output:
1
2
3
4
5

input:
5
5
4
3
2
1
output:
5
4
3
2
1

input:
5
1
3
2
4
5
output:
1
2
3
4
5

input:
5
5
1
3
2
4
output:
5
4
3
2
1

input:
5
4
1
3
2
5
output:
5
4
3
2
1

input:
5
5
4
1
3
2
output:
5
4
3
2
1

input:
5
2
1
3
4
5
output:
1
2
3
4
5

input:
5
2
5
1
3
4
output:
2
5
4
3
2

input:
5
4
2
5
1
3
output:
5
4
3
2
1

input:
5
3
2
5
1
4
output:
5
4
3
2
1

input:
5
4
3
2
5
1
output:
5
4
3
2
1

input:
5
1
4
3
2
5
output:
1
2
3
4
5

input:
5
1
5
4
3
2
output:
1
5
4
3
2

input:
5
2
1
5
4
3
output:
2
5
4
3
2

*/
int main() {
	int n;
	cin >> n;
	int *a = new int[n];
	int max = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (a[i] > max) {
			max = a[i];
		}
	}
	vector<int> v;
	for (int i = n - 1; i >= 0; --i) {
		if (a[i] >= max) {
			v.push_back(a[i]);
			max = a[i];
		}
	}
	for (int i = v.size() - 1; i >= 0; --i) {
		cout << v[i] << endl;
	}
	return 0;
}
