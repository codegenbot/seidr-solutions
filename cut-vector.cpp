#include <vector>
#include <iostream>
#include <tuple>

std::tuple<std::vector<int>, std::vector<int>> cutVector(std::vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int target = sum / 2;
    int currSum = 0;
    int idx = 0;
    
    while (currSum < target) {
        currSum += nums[idx];
        idx++;
    }
    
    std::vector<int> subvector1(nums.begin(), nums.begin() + idx);
    std::vector<int> subvector2(nums.begin() + idx, nums.end());
    
    return std::make_tuple(subvector1, subvector2);
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    
    auto [result1, result2] = cutVector(nums);
    
    for (int num : result1) {
        std::cout << num << std::endl;
    }
    
    for (int num : result2) {
        std::cout << num << std::endl;
    }
    
    return 0;
}