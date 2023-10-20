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
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int index = -1;
    int diff = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
        int left = 0, right = 0;
        for (int j = 0; j <= i; j++) {
            left += v[j];
        }
        for (int j = i + 1; j < n; j++) {
            right += v[j];
        }
        if (left == right) {
            index = i;
            break;
        }
        else {
            if (abs(left - right) < diff) {
                index = i;
                diff = abs(left - right);
            }
        }
    }
    if (index == -1) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
        for (int i = 0; i <= index; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
        for (int i = index + 1; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
