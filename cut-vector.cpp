#include <iostream>
#include <vector>
#include <climits>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    int diff = INT_MAX, cutIndex = 0;
    for (int i = 0; i < n - 1; ++i) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < n; ++j) {
            if (j < i) {
                leftSum += nums[j];
            } else {
                rightSum += nums[j];
            }
        }

        int currentDiff = abs(leftSum - rightSum);
        if (currentDiff <= diff) {
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