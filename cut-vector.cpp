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
        vector<int> v;
        v.push_back(n);
        while (cin >> n) {
            if (n == 0) break;
            v.push_back(n);
        }
        int sum = 0;
        for (int i = 0; i < v.size(); i++) {
            sum += v[i];
        }
        int left = 0;
        int right = sum;
        int ans = INT_MAX;
        int index = -1;
        for (int i = 0; i < v.size(); i++) {
            left += v[i];
            right -= v[i];
            if (abs(left - right) < ans) {
                ans = abs(left - right);
                index = i;
            }
        }
        for (int i = 0; i <= index; i++) {
            cout << v[i] << endl;
        }
        cout << 0 << endl;
        for (int i = index + 1; i < v.size(); i++) {
            cout << v[i] << endl;
        }
        cout << 0 << endl;
    }
    return 0;
}
