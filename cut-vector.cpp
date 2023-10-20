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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs. If there are multiple spots, pick the leftmost one.
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

input:
2
2 129
output:
1
2
1
129

*/
int main() {
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++) {
    cin>>v[i];
  }
  int l=0,r=0;
  int min=INT_MAX;
  for(int i=0;i<n-1;i++) {
    if(abs(v[i]-v[i+1])<min) {
      min=abs(v[i]-v[i+1]);
      l=i+1;
      r=i+2;
    }
  }
  for(int i=0;i<l;i++) {
    cout<<v[i]<<" ";
  }
  cout<<endl;
  for(int i=r-1;i<n;i++) {
    cout<<v[i]<<" ";
  }
  cout<<endl;
  return 0;
}
