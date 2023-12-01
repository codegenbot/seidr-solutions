#include <iostream>
#include <vector>

std::vector<int> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int index = -1;
    
    for (int i = 1; i < n; i++) {
        int leftSum = 0;
        int rightSum = 0;
        
        for (int j = 0; j < i; j++) {
            leftSum += nums[j];
        }
        
        for (int j = i; j < n; j++) {
            rightSum += nums[j];
        }
        
        int currDiff = abs(leftSum - rightSum);
        
        if (currDiff < diff) {
            diff = currDiff;
            index = i;
        }
    }
    
    std::vector<int> leftSubvector(nums.begin(), nums.begin() + index);
    std::vector<int> rightSubvector(nums.begin() + index, nums.end());
    
    return {leftSubvector, rightSubvector};
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    
    std::vector<int> leftSubvector, rightSubvector;
    std::tie(leftSubvector, rightSubvector) = cutVector(nums);
    
    for (int num : leftSubvector) {
        std::cout << num << std::endl;
    }
    
    for (int num : rightSubvector) {
        std::cout << num << std::endl;
    }
    
    return 0;
}