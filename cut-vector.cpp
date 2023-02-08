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
100
input:
1
10
output:
1100
input:
1
100
output:
11000
input:
1
1000
output:
110000
input:
1
10000
output:
1100000
*/
int main() {
    int n;
    while (cin >> n) {
        if (n == 0) {
            cout << 0 << endl;
            continue;
        }
        int cnt = 0;
        while (n) {
            cnt++;
            n >>= 1;
        }
        for (int i = 0; i < cnt; i++) {
            cout << 1;
        }
        for (int i = 0; i < cnt; i++) {
            cout << 0;
        }
        cout << endl;
    }
    return 0;
}
