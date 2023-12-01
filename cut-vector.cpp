#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int target = sum / 2;
    int currSum = 0;
    int index = 0;
    for (int i = 0; i < nums.size(); i++) {
        currSum += nums[i];
        if (currSum >= target) {
            index = i;
            break;
        }
    }
    
    std::vector<int> subVec1(nums.begin(), nums.begin() + index + 1);
    std::vector<int> subVec2(nums.begin() + index + 1, nums.end());
    
    return std::make_pair(subVec1, subVec2);
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