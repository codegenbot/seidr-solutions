#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> cutVector(std::vector<int> nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int idx = -1;
    
    for (int i = 1; i < n; i++) {
        int leftSum = 0;
        int rightSum = 0;
        
        for (int j = 0; j < i; j++) {
            leftSum += nums[j];
        }
        
        for (int j = i; j < n; j++) {
            rightSum += nums[j];
        }
        
        int currDiff = std::abs(leftSum - rightSum);
        if (currDiff < diff) {
            diff = currDiff;
            idx = i;
        }
    }
    
    std::vector<int> left(std::begin(nums), std::begin(nums) + idx);
    std::vector<int> right(std::begin(nums) + idx, std::end(nums));
    
    left.push_back(0);
    right.push_back(0);
    
    return {left, right};
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    
    std::vector<int> result = cutVector(nums);
    for (int num : result[0]) {
        std::cout << num << std::endl;
    }
    for (int num : result[1]) {
        std::cout << num << std::endl;
    }
    
    return 0;
}