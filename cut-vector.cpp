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
    vector<vector<int>> cutVec(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size() == 0) return res;
        int minDiff = INT_MAX;
        int index = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(abs(nums[i] - nums[i - 1]) < minDiff) {
                index = i;
                minDiff = abs(nums[i] - nums[i - 1]);
            }
            if(nums[i] == nums[i - 1]) {
                index = i;
                minDiff = 0;
                break;
            }
        }
        res.push_back(vector<int>(nums.begin(), nums.begin() + index));
        res.push_back(vector<int>(nums.begin() + index, nums.end()));
        return res;
    }
};
int main() {
    Solution s;
    vector<int> nums = {1, 0, 0};
    vector<vector<int>> res = s.cutVec(nums);
    for(int i = 0; i < res.size(); i++) {
        for(int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
