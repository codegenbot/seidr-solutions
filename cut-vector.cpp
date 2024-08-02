#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    int cutIndex;
    std::cin >> cutIndex;
    --cutIndex; // Adjust cutIndex to be 0-based

    std::vector<int> nums(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    int diff = abs(nums[cutIndex] - nums[cutIndex + 1]); // Update this line

    int left = cutIndex, right = cutIndex + 1;

    for (int i = cutIndex + 2; i < n; ++i) {
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