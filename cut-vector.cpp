#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(std::vector<int> nums) {
    int minDiff = INT_MAX;
    int cutIndex = 0;

    for (int i = 1; i < nums.size(); ++i) {
        int diff = abs(nums[i] - nums[i-1]);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    return {{nums[0]}, {nums[0]}};
}