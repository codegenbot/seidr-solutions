#include <vector>
#include <iostream>

std::vector<int> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int prefixSum = 0;
    int totalSum = 0;
    
    for (int i = 0; i < n; i++) {
        totalSum += nums[i];
    }
    
    for (int i = 0; i < n; i++) {
        prefixSum += nums[i];
        int suffixSum = totalSum - prefixSum;
        if (prefixSum == suffixSum || abs(prefixSum - suffixSum) == 1) {
            std::vector<int> subvector1(nums.begin(), nums.begin() + i + 1);
            std::vector<int> subvector2(nums.begin() + i + 1, nums.end());
            return {subvector1, subvector2};
        }
    }
    
    return {};
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    
    std::vector<int> result = cutVector(nums);
    for (int i = 0; i < result[0].size(); i++) {
        std::cout << result[0][i] << std::endl;
    }
    for (int i = 0; i < result[1].size(); i++) {
        std::cout << result[1][i] << std::endl;
    }
    
    return 0;
}