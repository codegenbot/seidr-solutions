#include <vector>
#include <iostream>
#include <climits>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int target = sum / 2;
    int currSum = 0;
    int diff = INT_MAX;
    int idx = 0;
    
    for (int i = 0; i < n; i++) {
        currSum += nums[i];
        if (abs(target - currSum) < diff) {
            diff = abs(target - currSum);
            idx = i;
        }
    }
    
    std::vector<int> left(nums.begin(), nums.begin() + idx + 1);
    std::vector<int> right(nums.begin() + idx + 1, nums.end());
    
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
    
    for (int i = 0; i < result.first.size(); i++) {
        std::cout << result.first[i] << std::endl;
    }
    
    for (int i = 0; i < result.second.size(); i++) {
        std::cout << result.second[i] << std::endl;
    }
    
    return 0;
}