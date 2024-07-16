#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#include <climits>
#include <numeric>

std::pair<std::vector<int>, std::vector<int>> findCutSpot(const std::vector<int>& nums) {
    int totalSum = std::accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0;
    int minDiff = INT_MAX;
    int cutIndex = -1;

    for (size_t i = 1; i < nums.size(); ++i) {
        leftSum += nums[i];
        int rightSum = totalSum - leftSum;
        int diff = std::abs(leftSum - rightSum);

        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    if (cutIndex == -1) {
        return std::make_pair(nums, std::vector<int>());
    } else {
        return std::make_pair(std::vector<int>(nums.begin(), nums.begin() + cutIndex + 1),
                              std::vector<int>(nums.begin() + cutIndex + 1, nums.end()));
    }
}

int main() {
    std::vector<int> nums = {2, 4, 1, 7, 5, 9};
    auto result = findCutSpot(nums);

    for (const auto& num : result.first) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    for (const auto& num : result.second) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}