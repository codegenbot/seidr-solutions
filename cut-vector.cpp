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
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int start = 0, end = 0;
    int min_diff = INT_MAX;
    for (int i = 1; i < n; i++) {
        // if (nums[i] == nums[i - 1]) {
        //     if (i - start + 1 < min_diff) {
        //         start = i - 1;
        //         end = i;
        //         min_diff = i - start + 1;
        //     }
        // } else {
        //     if (abs(nums[i] - nums[i - 1]) < min_diff) {
        //         start = i - 1;
        //         end = i;
        //         min_diff = abs(nums[i] - nums[i - 1]);
        //     }
        // }
        if (abs(nums[i] - nums[i - 1]) < min_diff) {
            start = i - 1;
            end = i;
            min_diff = abs(nums[i] - nums[i - 1]);
        }
    }
    for (int i = 0; i < n; i++) {
        if (i == start) {
            cout << nums[i] << endl;
        } else if (i == end) {
            cout << nums[i] << endl;
        } else {
            cout << 0 << endl;
        }
    }
}
