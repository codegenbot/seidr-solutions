#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int index = -1;
    
    for (int i = 0; i < n-1; i++) {
        int leftSum = 0;
        int rightSum = 0;
        
        for (int j = 0; j <= i; j++)
            leftSum += nums[j];
        
        for (int j = i+1; j < n; j++)
            rightSum += nums[j];
        
        int currDiff = abs(leftSum - rightSum);
        
        if (currDiff == 0) {
            return std::make_pair(std::vector<int>(nums.begin(), nums.begin() + i + 1), std::vector<int>(nums.begin() + i + 1, nums.end()));
        }
        
        if (currDiff < diff) {
            diff = currDiff;
            index = i;
        }
    }
    
    return std::make_pair(std::vector<int>(nums.begin(), nums.begin() + index + 1), std::vector<int>(nums.begin() + index + 1, nums.end()));
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++)
        std::cin >> nums[i];
    
    std::pair<std::vector<int>, std::vector<int>> result = cutVector(nums);
    
    for (int num : result.first)
        std::cout << num << std::endl;
    
    for (int num : result.second)
        std::cout << num << std::endl;
    
    return 0;
}