#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int halfSum = sum / 2;
    int currentSum = 0;
    int index = 0;
    
    while (currentSum < halfSum) {
        currentSum += nums[index++];
    }
    
    if (currentSum == halfSum) {
        return {std::vector<int>(nums.begin(), nums.begin() + index), std::vector<int>(nums.begin() + index, nums.end())};
    } else {
        int leftSum = currentSum - nums[index - 1];
        int rightSum = sum - currentSum;
        
        if (leftSum < rightSum) {
            return {std::vector<int>(nums.begin(), nums.begin() + index - 1), std::vector<int>(nums.begin() + index - 1, nums.end())};
        } else {
            return {std::vector<int>(nums.begin(), nums.begin() + index), std::vector<int>(nums.begin() + index, nums.end())};
        }
    }
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