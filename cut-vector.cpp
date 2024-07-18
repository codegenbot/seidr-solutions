#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 1; i < n; ++i) {
        int sumLeft = 0, sumRight = 0;
        for (int j = 0; j < i; ++j) {
            sumLeft += nums[j];
        }
        for (int j = i; j < n; ++j) {
            sumRight += nums[j];
        }
        
        int diff = std::abs(sumLeft - sumRight);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i < cutIndex; ++i) {
        std::cout << nums[i] << std::endl;
    }
    std::cout << std::endl;
    for (int i = cutIndex; i < n; ++i) {
        std::cout << nums[i] << std::endl;
    }
    
    return 0;
}