#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    int totalSum = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
        totalSum += nums[i];
    }

    int diff = INT_MAX, cutIndex = -1, leftSum = 0;
    for (int i = 0; i < n; ++i) {
        int rightSum = totalSum - leftSum;
        int currentDiff = std::abs(leftSum - rightSum);

        if (currentDiff <= diff || (currentDiff == diff && leftSum <= rightSum)) {
            diff = currentDiff;
            cutIndex = i;
        }
        leftSum += nums[i];
    }

    for (int i = 0; i <= cutIndex; ++i) {
        std::cout << nums[i] << (i < cutIndex ? " " : "") ;
    }
    std::cout << std::endl;

    for (int i = cutIndex + 1; i < n; ++i) {
        std::cout << nums[i] << (i < n - 1 ? " " : "") ;
    }
    std::cout << std::endl;
    
    return 0;
}