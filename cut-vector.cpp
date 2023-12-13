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
    for (int i = 1; i < n; i++) {
        if (v[i] - v[i - 1] < minDiff) {
            minDiff = v[i] - v[i - 1];
            cutIndex = i;
        }
    }
    vector<int> left, right;
    for (int i = 0; i < n; i++) {
        if (i <= cutIndex) {
            left.push_back(v[i]);
        } else {
            right.push_back(v[i]);
        }
    }
    cout << "Left: ";
    for (int i = 0; i < left.size(); i++) {
        cout << left[i] << " ";
    }
    cout << endl;
    cout << "Right: ";
    for (int i = 0; i < right.size(); i++) {
        cout << right[i] << " ";
    }
    cout << endl;
    return 0;
}