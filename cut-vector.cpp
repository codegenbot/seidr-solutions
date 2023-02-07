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
    vector<int> nums = {1, 0};
    int n = nums.size();
    int min_diff = INT_MAX;
    int index = 0;
    for (int i = 1; i < n; i++) {
        int left = 0;
        int right = 0;
        for (int j = 0; j < i; j++) {
            left += nums[j];
        }
        for (int j = i; j < n; j++) {
            right += nums[j];
        }
        if (abs(left - right) < min_diff) {
            min_diff = abs(left - right);
            index = i;
        }
    }
    for (int i = 0; i < index; i++) {
        cout << nums[i];
    }
    cout << endl;
    for (int i = index; i < n; i++) {
        cout << nums[i];
    }
    return 0;
}
