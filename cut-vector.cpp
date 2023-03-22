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
    vector<int> nums;
    int n;
    while (scanf("%d", &n) != EOF) {
        nums.push_back(n);
    }
    vector<int> left;
    vector<int> right;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        left.push_back(sum);
    }
    sum = 0;
    for (int i = nums.size() - 1; i >= 0; i--) {
        sum += nums[i];
        right.push_back(sum);
    }
    int minIndex = 0;
    int minDiff = INT_MAX;
    for (int i = 0; i < left.size(); i++) {
        int diff = abs(left[i] - right[left.size() - i - 1]);
        if (diff < minDiff) {
            minIndex = i;
            minDiff = diff;
        }
    }
    for (int i = 0; i <= minIndex; i++) {
        printf("%d\n", nums[i]);
    }
    printf("0\n");
    for (int i = minIndex + 1; i < nums.size(); i++) {
        printf("%d\n", nums[i]);
    }
    printf("0\n");
    return 0;
}
