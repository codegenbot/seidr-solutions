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
    while(cin>>n) {
        vector<int> v;
        for(int i = 0; i < n; i++) {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int l = 0, r = 0;
        int res = INT_MAX;
        int left = 0, right = 0;
        for(int i = 1; i <= n; i++) {
            r += v[i-1];
            l = r;
            for(int j = i-1; j > 0; j--) {
                l -= v[j-1];
                if(abs(l-r) < res) {
                    res = abs(l-r);
                    left = j;
                    right = i;
                }
            }
        }
        for(int i = 0; i < left; i++) {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        for(int i = left; i < right; i++) {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        for(int i = right; i < n; i++) {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
