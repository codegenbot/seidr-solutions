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
    
    int diff = INT_MAX;
    int cutIndex = -1;
    int leftSum = 0, rightSum = totalSum;

    for (int i = 0; i < n; ++i) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int currentDiff = abs(leftSum - rightSum);
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
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