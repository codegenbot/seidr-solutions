#include <iostream>
#include <vector>
#include <cmath>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int totalSum = std::accumulate(nums.begin(), nums.end(), 0);
    int minDiff = INT_MAX;
    int leftSum = 0;
    int rightSum = totalSum;

    std::pair<std::vector<int>, std::vector<int>> result;

    for (int i = 0; i < nums.size() - 1; ++i) {
        leftSum += nums[i];
        rightSum -= nums[i];

        int diff = std::abs(leftSum - rightSum);

        if (diff < minDiff || (diff == minDiff && std::abs(leftSum - rightSum) <= std::abs(2 * leftSum - totalSum))) {
            minDiff = diff;
            result.first = std::vector<int>(nums.begin(), nums.begin() + i + 1);
            result.second = std::vector<int>(nums.begin() + i + 1, nums.end());
        }
    }

    return result;
}