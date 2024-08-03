#include <vector>
#include <limits>
#include <cmath>

using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> res(2);
    int minDiff = numeric_limits<int>::max();
    for (int i = 1; i < n; i++) {
        if (nums[i] - nums[0] == nums[n-1] - nums[i]) {
            res[0].clear(); res[1].clear();
            res[0].insert(res[0].end(), nums.begin(), nums.begin() + i);
            res[1].insert(res[1].begin(), nums.begin() + i, nums.end());
            return res;
        }
        int diff = abs(nums[i] - nums[0]) - abs(nums[n-1] - nums[i]);
        if (diff < minDiff) {
            minDiff = diff;
            res[0].clear(); res[1].clear();
            res[0].insert(res[0].end(), nums.begin(), nums.begin() + i);
            res[1].insert(res[1].begin(), nums.begin() + i, nums.end());
        }
    }
    return res;