#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int idx = -1;
    
    // Find the index where the difference between the sum of elements on both sides is minimum
    for (int i = 0; i < n; i++) {
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
            idx = i;
        }
    }
    
    // Create the two subvectors
    std::vector<int> left(nums.begin(), nums.begin() + idx);
    std::vector<int> right(nums.begin() + idx, nums.end());
    
    return std::make_pair(left, right);
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