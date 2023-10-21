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
    while (cin >> n) {
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        int min_diff = INT_MAX;
        int min_index = -1;
        for (int i = 0; i < n - 1; i++) {
            if (abs(vec[i] - vec[i + 1]) < min_diff) {
                min_diff = abs(vec[i] - vec[i + 1]);
                min_index = i;
            }
        }
        for (int i = 0; i <= min_index; i++) {
            cout << vec[i] << endl;
        }
        cout << 0 << endl;
        for (int i = min_index + 1; i < n; i++) {
            cout << vec[i] << endl;
        }
        cout << 0 << endl;
    }
    return 0;
}
