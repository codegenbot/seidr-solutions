#include <vector>
#include <limits>
#include <cmath>

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int min_diff = std::numeric_limits<int>::max();
    int cut_index = -1;
    for (int i = 0; i < nums.size() - 1; i++) {
        int diff = std::abs(nums[i] - nums[i + 1]);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    vector<int> left, right;
    for (int i = 0; i <= cut_index; i++) {
        left.push_back(nums[i]);
    }
    for (int i = cut_index + 1; i < nums.size(); i++) {
        right.push_back(nums[i]);
    }
    return {left, right};
}