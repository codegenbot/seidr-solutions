#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int leftSum = 0;
    int rightSum = 0;
    
    // Calculate the sum of all elements in the vector
    for (int num : nums) {
        rightSum += num;
    }
    
    // Try cutting at each index and calculate the left and right sums
    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        
        // Check if the sums are equal or the difference is minimized
        if (leftSum == rightSum || std::abs(leftSum - rightSum) < std::abs(leftSum - rightSum + nums[i+1])) {
            // Return the two resulting subvectors
            std::vector<int> leftSubvector(nums.begin(), nums.begin() + i + 1);
            std::vector<int> rightSubvector(nums.begin() + i + 1, nums.end());
            return std::make_pair(leftSubvector, rightSubvector);
        }
    }
    
    // If no valid cut is found, return empty subvectors
    return std::make_pair(std::vector<int>(), std::vector<int>());
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