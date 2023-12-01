#include <iostream>
#include <vector>
#include <cmath>

std::pair<std::vector<int>, std::vector<int>> cut_vector(const std::vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    std::vector<int> prefixSum(n);
    
    for (int i = 0; i < n; i++) {
        sum += nums[i];
        prefixSum[i] = sum;
    }
    
    int minDiff = std::abs(prefixSum[n-1] - prefixSum[0]);
    int cutIndex = 0;
    
    for (int i = 1; i < n; i++) {
        int diff = std::abs(prefixSum[i-1] - (prefixSum[n-1] - prefixSum[i-1]));
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    std::vector<int> subvector1(nums.begin(), nums.begin() + cutIndex);
    std::vector<int> subvector2(nums.begin() + cutIndex, nums.end());
    
    return {subvector1, subvector2};
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