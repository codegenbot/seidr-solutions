#include <climits>
#include <iostream>
#include <cstdlib>

int main() {
    std::vector<int> nums;
    int num;
    
    while (std::cin >> num) {
        nums.push_back(num);
    }
    
    int leftSum = 0, rightSum = std::accumulate(nums.begin(), nums.end(), 0);
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 0; i < nums.size(); ++i) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int diff = abs(leftSum - rightSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; ++i) {
        std::cout << nums[i] << std::endl;
    }
    
    std::cout << 0 << std::endl;
    
    for (int i = cutIndex + 1; i < nums.size(); ++i) {
        std::cout << nums[i] << std::endl;
    }
    
    std::cout << 0 << std::endl;
    
    return 0;
}