#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cut_vector(const std::vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int target = sum / 2;
    int currSum = 0;
    int idx = 0;
    
    while (currSum <= target) {
        currSum += nums[idx];
        idx++;
    }
    
    if (currSum - target < target - (currSum - nums[idx-1])) {
        return {std::vector<int>(nums.begin(), nums.begin() + idx), std::vector<int>(nums.begin() + idx, nums.end())};
    } else {
        return {std::vector<int>(nums.begin(), nums.begin() + idx - 1), std::vector<int>(nums.begin() + idx - 1, nums.end())};
    }
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    
    std::pair<std::vector<int>, std::vector<int>> result = cut_vector(nums);
    
    for (int num : result.first) {
        std::cout << num << std::endl;
    }
    
    for (int num : result.second) {
        std::cout << num << std::endl;
    }
    
    return 0;
}