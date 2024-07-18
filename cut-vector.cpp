#include <iostream>
#include <climits>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> nums;
    int num;
    
    while (std::cin >> num) {
        nums.push_back(num);
    }
    
    int totalSum = std::accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0;
    int rightSum = totalSum;
    
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 0; i < nums.size(); ++i) {
        leftSum += nums[i];
        rightSum -= nums[i];
        
        int diff = std::abs(leftSum - rightSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; ++i) {
        std::cout << nums[i] << '\n';
    }
    
    std::cout << 0 << '\n';
    
    for (int i = cutIndex + 1; i < nums.size(); ++i) {
        std::cout << nums[i] << '\n';
    }
    
    std::cout << 0 << '\n';
    
    return 0;
}