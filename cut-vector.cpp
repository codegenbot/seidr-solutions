#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int leftSum = nums[0];
    int rightSum = 0;
    for (int i = 1; i < nums.size(); i++) {
        rightSum += nums[i];
    }
    
    int minDiff = std::abs(leftSum - rightSum);
    int cutIndex = 0;
    
    for (int i = 1; i < nums.size(); i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        
        int diff = std::abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    return std::make_pair(std::vector<int>(nums.begin(), nums.begin() + cutIndex + 1), std::vector<int>(nums.begin() + cutIndex + 1, nums.end()));
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    
    std::pair<std::vector<int>, std::vector<int>> result = cutVector(nums);
    
    for (int num : result.first) {
        std::cout << num << std::endl;
    }
    for (int num : result.second) {
        std::cout << num << std::endl;
    }
    
    return 0;
}