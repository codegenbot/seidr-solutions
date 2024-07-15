#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

int main() {
    std::vector<int> nums;
    int num;
    
    while (std::cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int diff = INT_MAX;
    int cutIdx = -1;
    
    for (int i = 1; i < n; ++i) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < i; ++j) {
            leftSum += nums[j];
        }
        for (int j = i; j < n; ++j) {
            rightSum += nums[j];
        }
        
        if (std::abs(leftSum - rightSum) < diff) {
            diff = std::abs(leftSum - rightSum);
            cutIdx = i;
        }
    }
    
    for (int i = 0; i < cutIdx; ++i) {
        std::cout << nums[i] << std::endl;
    }
    std::cout << std::endl;
    for (int i = cutIdx; i < n; ++i) {
        std::cout << nums[i] << std::endl;
    }
    
    return 0;
}