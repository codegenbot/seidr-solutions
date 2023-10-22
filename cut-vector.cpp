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
    int n, x;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr.push_back(x);
    }
    int minn = INT_MAX;
    int x1, x2, x3, x4;
    int index = 1;
    for (int i = 1; i < n - 1; i++) {
        if (abs(arr[i - 1] - arr[i]) <= minn) {
            minn = abs(arr[i - 1] - arr[i]);
            x1 = arr[i - 1];
            x2 = arr[i];
        }
        if (abs(arr[i] - arr[i + 1]) <= minn) {
            minn = abs(arr[i] - arr[i + 1]);
            x3 = arr[i];
            x4 = arr[i + 1];
        }
    }
    if (minn == 0) {
        cout << 0 << endl;
    } else {
        cout << x1 << endl;
        cout << x2 << endl;
        cout << x3 << endl;
        cout << x4 << endl;
    }
    return 0;
}
