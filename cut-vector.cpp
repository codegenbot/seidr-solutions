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

bool contains(const vector<int> &v, const int &min, const int &max) {
	int i = 0 , j = v.size() - 1;
	while(i <= j) {
		int mid = i + (j - i) / 2;
		if(v[mid] >= min && v[mid] <= max) return true;
		else if(v[mid] < min) i = mid + 1;
		else j = mid - 1;
	}
	return false;
}

int findInd(const vector<int>& v, const int &min, const int &max) {
	for(int i = 0; i < v.size(); i++)
		if(v[i] >= min && v[i] <= max) return i;
}

/*
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return  the two resulting subvectors as two outputs.
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
