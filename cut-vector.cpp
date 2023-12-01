#include <iostream>
#include <vector>
#include <cmath>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int target = (sum + 1) / 2;
    int currentSum = 0;
    int index = 0;
    
    while (currentSum < target && index < nums.size()) {
        currentSum += nums[index];
        index++;
    }
    
    if (currentSum > target) {
        index--;
    }
    
    std::vector<int> subvector1(nums.begin(), nums.begin() + index);
    std::vector<int> subvector2(nums.begin() + index, nums.end());
    
    return std::make_pair(subvector1, subvector2);
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