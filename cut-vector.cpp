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
    scanf("%d", &n);
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    vector<int> leftSum(n, 0), rightSum(n, 0);
    leftSum[0] = nums[0];
    for (int i = 1; i < n; i++) {
        leftSum[i] = leftSum[i - 1] + nums[i];
    }
    rightSum[n - 1] = nums[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        rightSum[i] = rightSum[i + 1] + nums[i];
    }
    int minDiff = INT_MAX;
    int ans = -1;
    for (int i = 0; i < n - 1; i++) {
        int diff = abs(leftSum[i] - rightSum[i + 1]);
        if (diff < minDiff) {
            minDiff = diff;
            ans = i;
        }
    }
    printf("%d\n", ans + 1);
    for (int i = 0; i <= ans; i++) {
        printf("%d%c", nums[i], i == ans ? '\n' : ' ');
    }
    for (int i = ans + 1; i < n; i++) {
        printf("%d%c", nums[i], i == n - 1 ? '\n' : ' ');
    }
    return 0;
}
