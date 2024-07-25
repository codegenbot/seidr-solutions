#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

int main() {
    std::vector<int> nums;
    int num;

    // Read and store input numbers until there's no more input
    while (std::cin >> num) {
        nums.push_back(num);
    }

    if (nums.empty()) {
        std::cerr << "Invalid input. Please provide at least one positive integer." << std::endl;
        return 1;
    }

    int n = nums.size();
    int diff = INT_MAX;
    int cutIndex = -1;

    for (int i = 1; i < n; ++i) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < i; ++j) {
            leftSum += nums[j];
        }
        for (int j = i; j < n; ++j) {
            rightSum += nums[j];
        }

        int currentDiff = std::abs(leftSum - rightSum);
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }

    // Output the two resulting subvectors
    for (int i = 0; i < cutIndex; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
    for (int i = cutIndex; i < n; ++i) {
        std::cout << nums[i] << " ";
    }

    return 0;
}