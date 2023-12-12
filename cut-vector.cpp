#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int target = sum / 2;
    int currSum = 0;
    int index = 0;
    
    while (currSum < target) {
        currSum += nums[index];
        index++;
    }
    
    if (currSum == target) {
        return std::make_pair(std::vector<int>(nums.begin(), nums.begin() + index), std::vector<int>(nums.begin() + index, nums.end()));
    } else {
        int diff1 = currSum - target;
        int diff2 = target - (currSum - nums[index - 1]);
        
        if (diff1 <= diff2) {
            return std::make_pair(std::vector<int>(nums.begin(), nums.begin() + index), std::vector<int>(nums.begin() + index, nums.end()));
        } else {
            return std::make_pair(std::vector<int>(nums.begin(), nums.begin() + index - 1), std::vector<int>(nums.begin() + index - 1, nums.end()));
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