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
    int diff = INT_MAX;
    int idx = -1;
    
    for (int i = 0; i < n; i++) {
        currSum += nums[i];
        int currDiff = std::abs(target - currSum);
        if (currDiff < diff) {
            diff = currDiff;
            idx = i;
        }
    }
    
    std::vector<int> subvector1(nums.begin(), nums.begin() + idx + 1);
    std::vector<int> subvector2(nums.begin() + idx + 1, nums.end());
    
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