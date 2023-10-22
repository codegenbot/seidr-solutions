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
    vector<int> v;
    while (scanf("%d",&n) != EOF) {
        v.push_back(n);
    }
    int left=0,right=0,ans=0;
    for(int i=1;i<v.size();i++){
        if(v[i-1]>=v[i]*2){
            right=i-1;
            break;
        }
        else if(v[i]*2<=v[i-1]){
            left=i;
        }
        else if(v[i]*2>v[i-1] && v[i]*2<=v[i-1]*2){
            ans=i;
        }
    }
    if(ans!=0) printf("%d %d %d\n",v[0],v[ans],v[ans+1]);
    else if(left!=0 && left+1<v.size()) printf("%d %d %d\n",v[0],v[left],v[left+1]);
    else printf("%d %d %d\n",v[0],v[right],v[right+1]);
    return 0;
}
