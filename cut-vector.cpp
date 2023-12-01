#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int index = -1;
    
    for (int i = 0; i < n - 1; i++) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j <= i; j++) {
            leftSum += nums[j];
        }
        for (int j = i + 1; j < n; j++) {
            rightSum += nums[j];
        }
        
        int currDiff = abs(leftSum - rightSum);
        if (currDiff < diff) {
            diff = currDiff;
            index = i;
        }
    }
    
    std::vector<int> leftSubVector, rightSubVector;
    for (int i = 0; i <= index; i++) {
        leftSubVector.push_back(nums[i]);
    }
    for (int i = index + 1; i < n; i++) {
        rightSubVector.push_back(nums[i]);
    }
    
    return std::make_pair(leftSubVector, rightSubVector);
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    
    std::pair<std::vector<int>, std::vector<int>> subVectors = cutVector(nums);
    
    for (int num : subVectors.first) {
        std::cout << num << std::endl;
    }
    for (int num : subVectors.second) {
        std::cout << num << std::endl;
    }
    
    return 0;
}