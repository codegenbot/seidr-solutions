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
    
    int totalSum = 0;
    for (int i = 0; i < n; ++i) {
        totalSum += nums[i];
    }
    
    int minDiff = INT_MAX;
    int cutIndex = -1;
    int leftSum = 0;

    for (int i = 0; i < n; ++i) {
        if (abs(totalSum - 2 * leftSum) < minDiff) {
            minDiff = abs(totalSum - 2 * leftSum);
            cutIndex = i;
        }
        leftSum += nums[i];
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