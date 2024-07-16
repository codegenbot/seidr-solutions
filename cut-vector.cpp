#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#include <climits>
#include <numeric>
#include <algorithm>

std::pair<std::vector<int>, std::vector<int>> findCutSpot(const std::vector<int>& nums) {
    if (nums.size() < 2) return std::make_pair(std::vector<int>(), std::vector<int>());
    
    std::vector<int> sortedNums = nums;
    std::sort(sortedNums.begin(), sortedNums.end());
    
    int sumLeft = 0;
    int sumRight = std::accumulate(sortedNums.begin(), sortedNums.end(), 0);
    int minDiff = sumRight;
    int cutIndex = 0;

    for (size_t i = 0; i < sortedNums.size() - 1; ++i) {
        sumLeft += sortedNums[i];
        sumRight -= sortedNums[i];
        
        int diff = std::abs(sumLeft - sumRight);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i + 1;
        }
    }

    return std::make_pair(std::vector<int>(sortedNums.begin(), sortedNums.begin() + cutIndex),
                          std::vector<int>(sortedNums.begin() + cutIndex, sortedNums.end()));
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