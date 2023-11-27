#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int target = sum / 2;
    int currSum = 0;
    int leftSum = 0;
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < n; i++) {
        currSum += nums[i];
        int diff = std::abs(target - currSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
            leftSum = currSum;
        }
    }
    
    std::vector<int> left(nums.begin(), nums.begin() + cutIndex + 1);
    std::vector<int> right(nums.begin() + cutIndex + 1, nums.end());
    
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