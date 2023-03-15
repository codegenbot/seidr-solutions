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
    vector<int> nums = {1};
    int n = nums.size();
    if (n == 0) {
        cout << 0 << endl;
        cout << 0 << endl << 0 << endl;
        return 0;
    }
    int left = 0, right = 0;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j <= i; j++) {
            sum1 += nums[j];
        }
        for (int j = i + 1; j < n; j++) {
            sum2 += nums[j];
        }
        if (abs(sum1 - sum2) < ans) {
            ans = abs(sum1 - sum2);
            left = sum1;
            right = sum2;
        }
    }
    cout << left << endl;
    cout << right << endl << ans << endl;
    return 0;
}
