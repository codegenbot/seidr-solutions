#include <iostream>
#include <vector>
#include <numeric>
#include <climits>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    int diff = INT_MAX;
    int cutIndex = -1;
    for (int i = 1; i < n; ++i) {
        int leftSum = std::accumulate(nums.begin(), nums.begin() + i, 0);
        int rightSum = std::accumulate(nums.begin() + i, nums.end(), 0);
        int currentDiff = std::abs(leftSum - rightSum);
        if (currentDiff <= diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }

    for (int i = 0; i < cutIndex; ++i) {
        std::cout << nums[i] << std::endl;
    }
    for (int i = cutIndex; i < n; ++i) {
        std::cout << nums[i] << std::endl;
    }

    return 0;
}