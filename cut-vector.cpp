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
    int t;
    cin >> t;
    vector<int> res;
    while (t--) {
        int n;
        cin >> n;
        res.push_back(n);
    }
    int l = 0, r = res.size() - 1;
    int min = INT_MAX;
    int lV = 0, rV = 0;
    bool flag = true;
    while (l <= r) {
        int sum = 0;
        for (int i = l; i <= r; i++) {
            sum += res[i];
        }
        if (min > abs(sum - 2 * sum)) {
            min = abs(sum - 2 * sum);
            lV = l;
            rV = r;
            flag = true;
        }
        if (sum < 2 * sum) {
            l++;
        } else if (sum > 2 * sum) {
            r--;
        } else {
            flag = false;
            break;
        }
    }
    if (flag) {
        for (int i = 0; i < lV; i++) {
            cout << res[i] << endl;
        }
        cout << 0 << endl;
        for (int i = lV; i < res.size(); i++) {
            cout << res[i] << endl;
        }
    } else {
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << endl;
        }
        cout << 0 << endl;
        cout << 0 << endl;
    }
    return 0;
}
