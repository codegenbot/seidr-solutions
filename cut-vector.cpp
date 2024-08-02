#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    if (n < 2) {
        std::cout << "Invalid input. Vector size must be at least 2." << std::endl;
        return 0;
    }

    int cutIndex;
    std::cin >> cutIndex;

    if (cutIndex < 1 || cutIndex >= n) {
        std::cout << "Invalid cutIndex. Please provide a valid index within the range [1, " << n - 1 << "]." << std::endl;
        return 0;
    }

    std::vector<int> nums(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    int diff = abs(nums[cutIndex - 1] - nums[cutIndex]);
    int left = cutIndex - 1, right = cutIndex;

    for (int i = cutIndex + 1; i < n; ++i) {
        int newDiff = abs(nums[i] - nums[i - 1]);
        if (newDiff < diff) {
            diff = newDiff;
            left = i - 1;
            right = i;
        }
    }

    for (int i = 0; i < n; ++i) {
        if (i == left) {
            std::cout << std::endl;
        } else if (i != right) {
            std::cout << nums[i] << " ";
        } else {
            std::cout << nums[i] << std::endl;
        }
    }

    return 0;
}  