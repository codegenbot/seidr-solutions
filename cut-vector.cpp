#include <iostream>
#include <vector>
#include <cmath>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int target = sum / 2;
    int currSum = 0;
    int i;
    for (i = 0; i < n; i++) {
        currSum += nums[i];
        if (currSum >= target) {
            break;
        }
    }
    
    std::pair<std::vector<int>, std::vector<int>> result;
    if (currSum == target) {
        result.first = std::vector<int>(nums.begin(), nums.begin() + i + 1);
        result.second = std::vector<int>(nums.begin() + i + 1, nums.end());
    } else if (std::abs(currSum - target) < std::abs(target - (currSum - nums[i]))) {
        result.first = std::vector<int>(nums.begin(), nums.begin() + i + 1);
        result.second = std::vector<int>(nums.begin() + i + 1, nums.end());
    } else {
        result.first = std::vector<int>(nums.begin(), nums.begin() + i);
        result.second = std::vector<int>(nums.begin() + i, nums.end());
    }
    
    return result;
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