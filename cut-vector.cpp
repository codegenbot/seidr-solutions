#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int leftSum = 0;
    int rightSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        rightSum += nums[i];
    }
    
    int minDiff = abs(leftSum - rightSum);
    int cutIndex = 0;
    
    for (int i = 0; i < nums.size(); i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i + 1;
        }
    }
    
    std::vector<int> left(nums.begin(), nums.begin() + cutIndex);
    std::vector<int> right(nums.begin() + cutIndex, nums.end());
    
    return std::make_pair(left, right);
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