#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    
    std::vector<int> prefixSum(n);
    prefixSum[0] = nums[0];
    for (int i = 1; i < n; ++i) {
        prefixSum[i] = prefixSum[i - 1] + nums[i];
    }
    
    int cutIndex = 0;
    int minDiff = std::abs(prefixSum[n-1] - 2 * prefixSum[0]);
    for (int i = 1; i < n; ++i) {
        int diff = std::abs(prefixSum[n-1] - 2 * prefixSum[i]);
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