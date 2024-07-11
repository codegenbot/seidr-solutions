#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n, diff = INT_MAX, cutIndex = 0;
    std::vector<int> nums;

    // Read input
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        nums.push_back(num);
    }

    for (int i = 0; i < n - 1; ++i) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < n; ++j) {
            if (j < i) {
                leftSum += nums[j];
            } else {
                rightSum += nums[j];
            }
        }
        
        int currentDiff = std::abs(leftSum - rightSum);
        if (currentDiff <= diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }

    // Output the two subvectors
    for (int i = 0; i <= cutIndex; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
    for (int i = cutIndex + 1; i < n; ++i) {
        std::cout << nums[i] << " ";
    }

    return 0;
}