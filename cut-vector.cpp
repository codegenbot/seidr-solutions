#include <iostream>
#include <vector>
#include <climits>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    int totalSum = 0;
    
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
        totalSum += nums[i];
    }
    
    int minDiff = INT_MAX;
    int cutIndex = -1;
    int sumRight = 0;
    
    for (int i = 0; i < n; ++i) {
        sumRight += nums[i];
        int diff = abs(totalSum - 2 * sumRight);
        
        if (diff < minDiff) {
            minDiff = diff;
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