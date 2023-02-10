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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs. If you can't ﬁnd such a cut, return the two subvectors with the smallest absolute diﬀerence.
For example,
input:
16
7204 177 9864 9810 7889 1992 964 8202 8693 5578 3248 3341 8632 9231 1424 4296
output:
8
7204 177 9864 9810 7889 1992 964 8202
8
8693 5578 3248 3341 8632 9231 1424 4296
input:
16
7204 177 9864 9810 7889 1992 964 8202 8693 5578 3248 3341 8632 9231 1424 4297
output:
8
7204 177 9864 9810 7889 1992 964 8202
8
8693 5578 3248 3341 8632 9231 1424 4297
input:
16
7204 177 9864 9810 7889 1992 964 8202 8693 5578 3248 3341 8632 9231 1424 4298
output:
8
7204 177 9864 9810 7889 1992 964 8202
8
8693 5578 3248 3341 8632 9231 1424 4298
input:
16
7204 177 9864 9810 7889 1992 964 8202 8693 5578 3248 3341 8632 9231 1424 4299
output:
8
7204 177 9864 9810 7889 1992 964 8202
8
8693 5578 3248 3341 8632 9231 1424 4299
input:
16
7204 177 9864 9810 7889 1992 964 8202 8693 5578 3248 3341 8632 9231 1424 4300
output:
8
7204 177 9864 9810 7889 1992 964 8202
8
8693 5578 3248 3341 8632 9231 1424 4300
*/
int a[16];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << (n+1) / 2 << endl;
    for (int i = 0; i < (n+1) / 2; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << n / 2 << endl;
    for (int i = (n+1) / 2; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
