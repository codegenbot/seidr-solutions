#include <iostream>
#include <vector>
#include <climits>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int cutIndex = -1;
    
    // Find the spot where the difference is as small as possible
    for (int i = 1; i < n; i++) {
        int leftSum = 0;
        int rightSum = 0;
        
        // Calculate the sum of elements on the left side of the cut
        for (int j = 0; j < i; j++) {
            leftSum += nums[j];
        }
        
        // Calculate the sum of elements on the right side of the cut
        for (int j = i; j < n; j++) {
            rightSum += nums[j];
        }
        
        // Update the difference and cut index if necessary
        int currentDiff = abs(leftSum - rightSum);
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }
    
    // Create the two resulting subvectors
    std::vector<int> leftSubvector(nums.begin(), nums.begin() + cutIndex);
    std::vector<int> rightSubvector(nums.begin() + cutIndex, nums.end());
    
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
    
    // Print the two resulting subvectors
    for (int num : result.first) {
        std::cout << num << std::endl;
    }
    for (int num : result.second) {
        std::cout << num << std::endl;
    }
    
    return 0;
}