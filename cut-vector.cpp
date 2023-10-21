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
    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    int minDiff = INT_MAX;
    int left = 0;
    int right = n - 1;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        int rightSum = sum - leftSum;
        if (abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            left = i + 1;
            right = n - i - 1;
        }
    }
    cout << left << endl;
    cout << right << endl;
    return 0;
}
