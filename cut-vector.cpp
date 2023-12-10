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
vector<int> cutVector(vector<int>& v) {
    vector<int> result;
    int minDiff = INT_MAX;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == v[i + 1]) {
            continue;
        } else {
            int diff = abs(v[i] - v[i + 1]);
            if (diff < minDiff) {
                result.clear();
                minDiff = diff;
                result.push_back(v[i]);
                result.push_back(v[i + 1]);
            } else if (diff == minDiff) {
                result.push_back(v[i]);
                result.push_back(v[i + 1]);
            }
        }
    }
    return result;
}