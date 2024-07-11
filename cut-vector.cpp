#include <iostream>
#include <vector>
#include <cstdlib>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    int diff = std::abs(nums[0] - nums[n-1]);
    int cutIndex = 0;
    for (int i = 1; i < n - 1; ++i) {
        int currentDiff = std::abs(std::accumulate(nums.begin(), nums.begin() + i, 0) - std::accumulate(nums.begin() + i, nums.end(), 0));
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }

    for (int i = 0; i <= cutIndex; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
    for (int i = cutIndex + 1; i < n; ++i) {
        std::cout << nums[i] << " ";
    }
    return 0;
}