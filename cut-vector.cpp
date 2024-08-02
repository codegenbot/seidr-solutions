#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    int cutIndex = 0;
    int minDiff = abs(nums[0] - nums[n - 1]);
    for (int i = 1; i < n - 1; ++i) {
        int diff = abs(nums[i] - nums[n - i - 1]);
        if (diff < minDiff) {
            cutIndex = i;
            minDiff = diff;
        }
    }

    for (int i = 0; i <= cutIndex; ++i) {
        std::cout << nums[i] << std::endl;
    }
    std::cout << std::endl;
    for (int i = cutIndex + 1; i < n; ++i) {
        std::cout << nums[i] << std::endl;
    }

    return 0;
}