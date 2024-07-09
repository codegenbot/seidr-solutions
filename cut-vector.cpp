#include <vector>
#include <climits>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    for (int i = 1; i < nums.size(); i++) {
        int diff = abs(nums[i] - nums[i-1]);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }

    vector<int> left, right;
    if (splitIndex == 0) {
        left = {nums[0]};
        right = nums;
    } else if (splitIndex == nums.size() - 1) {
        left = nums;
        right = {nums.back()};
    } else {
        left = vector<int>(nums.begin(), nums.begin() + splitIndex);
        right = vector<int>(nums.begin() + splitIndex, nums.end());
    }

    return {left, right};