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
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        v.push_back(m);
    }
    int minDiff = INT_MAX;
    int cutIndex = -1;
    for (int i = 0; i < n; i++) {
        int diff = abs(v[i] - v[n-1]);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    vector<int> subvec1, subvec2;
    for (int i = 0; i < n; i++) {
        if (i <= cutIndex) {
            subvec1.push_back(v[i]);
        } else {
            subvec2.push_back(v[i]);
        }
    }
    cout << "Subvector 1: ";
    for (int i = 0; i < subvec1.size(); i++) {
        cout << subvec1[i] << " ";
    }
    cout << endl;
    cout << "Subvector 2: ";
    for (int i = 0; i < subvec2.size(); i++) {
        cout << subvec2[i] << " ";
    }
    cout << endl;
    return 0;
}