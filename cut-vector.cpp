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


class Solution {
public:
    vector<int> splitVector(vector<int> &nums) {
        int n = nums.size();
        vector<int> ans(n + 1, 0);
        for(int i = 1; i <= n; i++) {
            ans[i] = ans[i - 1] + nums[i - 1];
        }
        int min_diff = INT_MAX;
        int min_index = 0;
        for(int i = 1; i <= n; i++) {
            int left = ans[i];
            int right = ans[n] - ans[i];
            if(abs(left - right) < min_diff) {
                min_diff = abs(left - right);
                min_index = i;
            }
        }
        vector<int> res;
        for(int i = 0; i < min_index; i++) {
            res.push_back(nums[i]);
        }
        res.push_back(0);
        for(int i = min_index; i < n; i++) {
            res.push_back(nums[i]);
        }
        return res;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 10};
    vector<int> res = s.splitVector(nums);
    for(auto num : res) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
