#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main() {
    std::vector<int> nums = {5, 2, 7, 10, 4};

    int minDiff = std::abs(std::accumulate(nums.begin(), nums.end(), 0) - nums[0]);
    int cutSpot = 0;

    for (int i = 1; i < nums.size(); ++i) {
        int sum1 = std::accumulate(nums.begin(), nums.begin() + i, 0);
        int sum2 = std::accumulate(nums.begin() + i, nums.end(), 0);
        int diff = std::abs(sum1 - sum2);

        if (diff < minDiff) {
            minDiff = diff;
            cutSpot = i;
        }
    }

    for (int i = 0; i < cutSpot; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
    
    for (int i = cutSpot; i < nums.size(); ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}