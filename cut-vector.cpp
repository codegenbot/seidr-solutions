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
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    int i = 0, j = n - 1;
    while (1) {
        if (i == j) {
            break;
        }
        if (i + 1 == j) {
            if (vec[i] == vec[j]) {
                break;
            }
            if (abs(vec[i] - vec[j]) != 1) {
                break;
            }
            if (vec[i] < vec[j]) {
                ++i;
            } else {
                --j;
            }
            continue;
        }
        int si = vec[i];
        int sj = vec[j];
        if (si == sj) {
            break;
        }
        if (si <= sj) {
            sj -= si;
            ++i;
        }
        if (si >= sj) {
            si -= sj;
            --j;
        }
    }
    cout << i << endl;
    for (int k = 0; k <= i; k++) {
        cout << vec[k] << endl;
    }
    return 0;
}
