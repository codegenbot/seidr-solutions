#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> cutVector(const std::vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int target = sum / 2;
    int currSum = 0;
    int diff = std::abs(target - currSum);
    int index = 0;
    
    for (int i = 0; i < nums.size(); i++) {
        currSum += nums[i];
        int newDiff = std::abs(target - currSum);
        if (newDiff < diff) {
            diff = newDiff;
            index = i;
        }
    }
    
    std::vector<int> subvector1(nums.begin(), nums.begin() + index + 1);
    std::vector<int> subvector2(nums.begin() + index + 1, nums.end());
    
    return {subvector1, subvector2};
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    
    std::vector<int> result1, result2;
    std::tie(result1, result2) = cutVector(nums);
    
    for (int num : result1) {
        std::cout << num << std::endl;
    }
    
    for (int num : result2) {
        std::cout << num << std::endl;
    }
    
    return 0;
}