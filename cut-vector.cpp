#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7}; // Input vector initialization for demonstration
    int n = nums.size();
    
    int totalSum = std::accumulate(nums.begin(), nums.end(), 0);
    int halfSum = totalSum / 2;
    
    int prefixSum = 0, minDiff = totalSum;
    int cutIndex = 0;
    
    for (int i = 0; i < n; i++) {
        prefixSum += nums[i];
        int currentDiff = std::abs(halfSum - prefixSum);
        if (currentDiff < minDiff) {
            minDiff = currentDiff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; i++) {
        std::cout << nums[i] << ' ';
    }
    std::cout << '\n';

    for (int i = cutIndex + 1; i < n; i++) {
        std::cout << nums[i] << ' ';
    }

    return 0;
}