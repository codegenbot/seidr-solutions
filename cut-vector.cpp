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
    vector<int> nums = {1,0};
    int n = nums.size();
    vector<int> sum(n+1,0);
    for(int i = 0; i < n; i++) {
        sum[i+1] = sum[i] + nums[i];
    }
    int min_diff = INT_MAX;
    int left_index = 0;
    int right_index = 0;
    for(int i = 1; i <= n; i++) {
        if(min_diff > abs(sum[i] - (sum[n] - sum[i]))) {
            min_diff = abs(sum[i] - (sum[n] - sum[i]));
            left_index = i;
            right_index = n - i;
        }
    }
    cout << left_index << endl;
    for(int i = 0; i < left_index; i++) {
        cout << nums[i] << endl;
    }
    cout << right_index << endl;
    for(int i = left_index; i < n; i++) {
        cout << nums[i] << endl;
    }
}
