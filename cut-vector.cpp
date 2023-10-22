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
    v.push_back(1);
    v.push_back(0);
    int n = v.size();
    int min_diff = INT_MAX;
    int index = 0;
    int left = 0, right = 0;
    for(int i = 0; i < n - 1; i++) {
        left += v[i];
    }
    right = left - v[0];
    for(int i = 0; i < n - 1; i++) {
        int diff = abs(left - right);
        if(diff < min_diff) {
            min_diff = diff;
            index = i;
        }
        left -= v[i];
        right += v[i + 1];
    }
    for(int i = 0; i <= index; i++) {
        cout << v[i] << endl;
    }
    for(int i = index + 1; i < n; i++) {
        cout << v[i] << endl;
    }
    return 0;
}
