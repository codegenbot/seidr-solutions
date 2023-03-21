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

input:
16
7204 177 9864 9810 7889 1992 964 8202 8693 5578 3248 3341 8632 9231 1424 4296
output:
8
7204 177 9864 9810 7889 1992 964 8202
8
8693 5578 3248 3341 8632 9231 1424 4296

*/
int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    int leftMax = 0;
    int rightMin = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (vec[i] > leftMax) {
            leftMax = vec[i];
        }
        if (vec[n - i - 1] < rightMin) {
            rightMin = vec[n - i - 1];
        }
        if (leftMax >= rightMin) {
            int half = (n - i) / 2;
            cout << half << endl;
            for (int j = 0; j < half; j++) {
                cout << vec[j] << endl;
            }
            cout << half << endl;
            for (int j = n - half; j < n; j++) {
                cout << vec[j] << endl;
            }
            break;
        }
    }
    return 0;
}
