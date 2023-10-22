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
	vector<int> v;
	int n;
	while(scanf("%d",&n)!= EOF){
		if(n != -1) v.push_back(n);
		else{
			vector<int> ret;
			int m = INT_MAX;
			for(int i = 1; i < v.size(); i++){
				int t = abs(v[i] - v[i-1]);
				if(t < m){
					m = t;
					ret.clear();
					ret.push_back(i-1);
					ret.push_back(i);
				}else if(t == m){
					ret.push_back(i-1);
					ret.push_back(i);
				}
			}
			for(int i = 0; i < ret.size(); i++){
				printf("%d\n",v[ret[i]]);
			}
			printf("0\n");
			v.clear();
		}
	}
	return 0;
}
