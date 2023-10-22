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
//#include <climits>
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
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int min_val = INT_MAX;
	int min_index = -1;
	int curr_min = INT_MAX;
	for(int i=0;i<n;i++){
		curr_min = min(abs(v[i] - v[i-1]), curr_min);
		if(curr_min<min_val){
			min_val = curr_min;
			min_index = i;
		}
	}
	for(int i=0;i<min_index;i++)
		cout<<v[i]<<" ";
	cout<<endl;
	while(min_index<n)
		cout<<v[min_index++]<<" ";
	cout<<endl;
	return 0;
}
