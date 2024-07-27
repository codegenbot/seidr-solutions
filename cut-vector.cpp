#include <iostream>
#include <vector>
#include <numeric>
#include <limits>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    int minDiff = std::abs(std::accumulate(nums.begin(), nums.end(), 0) - nums[0]);
    int cutSpot = 1;

    for (int i = 1; i < n; ++i) {
        int sum1 = std::accumulate(nums.begin(), nums.begin() + i, 0);
        int sum2 = std::accumulate(nums.begin() + i, nums.end(), 0);
        int diff = std::abs(sum1 - sum2);

        if (diff < minDiff) {
            minDiff = diff;
            cutSpot = i;
        }
    }

    std::vector<int> subVec1(nums.begin(), nums.begin() + cutSpot);
    std::vector<int> subVec2(nums.begin() + cutSpot, nums.end());

    int sum1 = std::accumulate(subVec1.begin(), subVec1.end(), 0);
    int sum2 = std::accumulate(subVec2.begin(), subVec2.end(), 0);

    for (int num : subVec1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    for (int num : subVec2) {
        std::cout << num << " ";
    }

    return 0;
}