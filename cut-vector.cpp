#include <iostream>
#include <vector>
#include <climits>

void cutVector(std::vector<int>& nums) {
    int n = nums.size();
    int leftSum = 0;
    int rightSum = 0;
    
    // Calculate the sum of all elements in the vector
    for (int i = 0; i < n; i++) {
        rightSum += nums[i];
    }
    
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    // Iterate through each index to find the optimal cut position
    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        
        int diff = abs(leftSum - rightSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    // Create the two subvectors
    std::vector<int> subvector1(nums.begin(), nums.begin() + cutIndex + 1);
    std::vector<int> subvector2(nums.begin() + cutIndex + 1, nums.end());
    
    // Print the two subvectors
    for (int i = 0; i < subvector1.size(); i++) {
        std::cout << subvector1[i] << std::endl;
    }
    
    for (int i = 0; i < subvector2.size(); i++) {
        std::cout << subvector2[i] << std::endl;
    }
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> nums(n);
    
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    
    cutVector(nums);
    
    return 0;
}