#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(std::vector<int> nums) {
    int n = nums.size();
    int leftSum = 0;
    int rightSum = 0;
    
    // Calculate the sum of all numbers in the vector
    for (int i = 0; i < n; i++) {
        rightSum += nums[i];
    }
    
    // Iterate through the vector and find the spot where the difference is smallest
    int minDiff = abs(leftSum - rightSum);
    int cutIndex = -1;
    
    for (int i = 0; i < n-1; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        
        int diff = abs(leftSum - rightSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    // Create the two resulting subvectors
    std::vector<int> leftVector(nums.begin(), nums.begin() + cutIndex + 1);
    std::vector<int> rightVector(nums.begin() + cutIndex + 1, nums.end());
    
    return std::make_pair(leftVector, rightVector);
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