#include <iostream>
#include <climits>
#include <vector>
#include <numeric>

std::pair<std::vector<int>, std::vector<int>> findCutSpot(const std::vector<int>& nums) {
    int cutIndex = 0;
    int minDiff = INT_MAX;

    for (int i = 1; i < nums.size(); i++) {
        int diff = std::abs(std::accumulate(nums.begin(), nums.begin() + i, 0) - std::accumulate(nums.begin() + i, nums.end(), 0));
        if (diff < minDiff) {
            cutIndex = i;
            minDiff = diff;
        }
    }

    std::vector<int> subvector1(nums.begin(), nums.begin() + cutIndex);
    std::vector<int> subvector2(nums.begin() + cutIndex, nums.end());

    if (minDiff == INT_MAX) {
        return std::make_pair(std::vector<int>(), std::vector<int>());
    }

    return std::make_pair(subvector1, subvector2);
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    auto result = findCutSpot(nums);

    for (int num : result.first) {
        std::cout << num << std::endl;
    }

    for (int num : result.second) {
        std::cout << num << std::endl;
    }

    return 0;
}