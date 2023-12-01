#include <iostream>
#include <vector>
#include <cmath>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int target = sum / 2;
    int currSum = 0;
    int idx = 0;
    int minDiff = INT_MAX;
    
    for (int i = 0; i < nums.size(); i++) {
        currSum += nums[i];
        int diff = abs(target - currSum);
        if (diff < minDiff) {
            minDiff = diff;
            idx = i + 1;
        }
    }
    
    std::vector<int> subvector1(nums.begin(), nums.begin() + idx);
    std::vector<int> subvector2(nums.begin() + idx, nums.end());
    
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