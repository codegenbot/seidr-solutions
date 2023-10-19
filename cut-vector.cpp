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
    vector<int> v = {1, 10, 100, 1000, 10000};
    int n = v.size();
    int left = 0, right = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
    }
    int cur = 0;
    int minDiff = INT_MAX;
    for (int i = 0; i < n; i++) {
        cur += v[i];
        if (abs(sum - cur - cur) < minDiff) {
            minDiff = abs(sum - cur - cur);
            left = cur;
            right = sum - cur;
        }
    }
    cout << left << " " << right << endl;
    return 0;
}
