#include <vector>
#include <iostream>

std::vector<int> cutVector(const std::vector<int>& nums) {
    int minDiff = INT_MAX;
    int cutIndex = -1;

    for (int i = 0; i < nums.size() - 1; i++) {
        int diff = abs(nums[i] - nums[i + 1]);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    std::vector<int> left = {nums[0]};
    for (int i = 0; i < cutIndex; i++) {
        left.push_back(nums[i + 1]);
    }

    std::vector<int> right = {nums[cutIndex + 1]};
    for (int i = cutIndex + 1; i < nums.size(); i++) {
        right.push_back(nums[i]);
    }

    return {left, right};
}