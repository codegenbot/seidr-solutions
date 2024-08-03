#include <iostream>
#include <vector>
#include <cstdlib>

int main() {
    int n;
    std::cin >> n;

    int cutIndex;
    std::cin >> cutIndex;

    std::vector<int> nums(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    int diff = abs(nums[cutIndex - 1] - nums[cutIndex]);
    int left = cutIndex - 1, right = cutIndex;

    for (int i = cutIndex + 1; i < n; ++i) {
        int newDiff = abs(nums[i] - nums[i - 1]);
        if (newDiff < diff || (newDiff == diff && abs(i - cutIndex) < abs(right - left))) {
            diff = newDiff;
            left = i - 1;
            right = i;
        }
    }

    for (int i = 0; i < n; ++i) {
        if (i == left) {
            std::cout << "\n";
        } else if (i == right) {
            std::cout << nums[i] << " ";
        } else {
            std::cout << nums[i] << " ";
        }
    }

    return 0;
}