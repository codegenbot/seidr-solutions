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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. 
Return the two resulting subvectors as two outputs.
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
    int minDiff = INT_MAX;
    int left = 0;
    int right = 0;
    for (int i = 0; i < nums.size() - 1; i++) {
        int leftSum = 0;
        for (int j = 0; j <= i; j++) {
            leftSum += nums[j];
        }
        int rightSum = 0;
        for (int j = i + 1; j < nums.size(); j++) {
            rightSum += nums[j];
        }
        if (leftSum == rightSum) {
            minDiff = 0;
            left = 0;
            right = n - 1;
            break;
        }
        else if (abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            left = 0;
            right = i + 1;
        }
    }
    cout << "left: " << left << endl;
    cout << "right: " << right << endl;
    for (int i = 0; i < left; i++) {
        cout << nums[i] << endl;
    }
    for (int i = right; i < n; i++) {
        cout << nums[i] << endl;
    }
    return 0;
}
