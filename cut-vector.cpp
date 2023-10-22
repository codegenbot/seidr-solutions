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
    cin>>n;
    vector<int> v(n, 0);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    int min_diff = INT_MAX;
    int min_pos = -1;
    for(int i=0; i<v.size(); i++) {
        int left = 0, right = 0;
        for(int j=i; j>=0; j--) {
            left += v[j];
        }
        for(int j=i; j<v.size(); j++) {
            right += v[j];
        }
        if(abs(left - right) < min_diff) {
            min_diff = abs(left - right);
            min_pos = i;
        }
    }
    cout<<min_pos+1<<endl;
    return 0;
}
