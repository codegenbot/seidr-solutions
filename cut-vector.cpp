#include <iostream>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int halfSum = sum / 2;
    int currSum = 0;
    int idx = 0;
    
    while (currSum <= halfSum) {
        currSum += nums[idx];
        idx++;
    }
    
    std::vector<int> subvector1(nums.begin(), nums.begin() + idx);
    std::vector<int> subvector2(nums.begin() + idx, nums.end());
    
    for (int num : subvector1) {
        std::cout << num << std::endl;
    }
    for (int num : subvector2) {
        std::cout << num << std::endl;
    }
    
    return 0;
}