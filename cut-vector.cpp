#include <iostream>
#include <numeric>
#include <cmath>

int main() {
    std::vector<int> nums;
    int num;
    
    while (std::cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int diff = INT_MAX;
    int cutIdx = 0;
    
    for (int i = 1; i < n; ++i) {
        int leftSum = std::accumulate(nums.begin(), nums.begin() + i, 0);
        int rightSum = std::accumulate(nums.begin() + i, nums.end(), 0);
        
        int currentDiff = std::abs(leftSum - rightSum);
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIdx = i;
        }
    }
    
    for (int i = 0; i < cutIdx; ++i) {
        std::cout << nums[i] << std::endl;
    }
    
    std::cout << 0 << std::endl;
    
    for (int i = cutIdx; i < n; ++i) {
        std::cout << nums[i] << std::endl;
    }
    
    return 0;
}