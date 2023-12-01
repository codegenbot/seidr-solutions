#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < n-1; i++) {
        int leftSum = 0;
        int rightSum = 0;
        
        for (int j = 0; j <= i; j++) {
            leftSum += nums[j];
        }
        
        for (int j = i+1; j < n; j++) {
            rightSum += nums[j];
        }
        
        int currDiff = abs(leftSum - rightSum);
        
        if (currDiff < diff) {
            diff = currDiff;
            cutIndex = i;
        }
    }
    
    std::vector<int> leftSubvector(nums.begin(), nums.begin() + cutIndex + 1);
    std::vector<int> rightSubvector(nums.begin() + cutIndex + 1, nums.end());
    
    return std::make_pair(leftSubvector, rightSubvector);
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