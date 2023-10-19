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

input:
4
1 2 127 128
output:
4
1
2
127
128
0
*/
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int minDiff = INT_MAX, maxDiff = 0;
    int index = -1;
    int sum = 0;
    for (int i = 1; i < n; i++) {
        int diff = abs(nums[i] - nums[i - 1]);
        if (diff == 0)
            minDiff = 0;
        else if (diff < minDiff) {
            minDiff = diff;
            index = i;
        }
        if (diff == maxDiff) {
            index = i;
            sum = -1;
        }
        if (diff > maxDiff) {
            maxDiff = diff;
        }
    }
    cout << sum + index << endl;
    for (int i = 0; i < index; i++)
        cout << nums[i] << endl;
    for (int i = index; i < n; i++)
        cout << nums[i] << endl;
    return 0;
}
