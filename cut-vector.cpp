#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int target = sum / 2;
    int currSum = 0;
    int index = 0;
    for (int i = 0; i < n; i++) {
        currSum += nums[i];
        if (currSum >= target) {
            index = i;
            break;
        }
    }
    
    std::vector<int> subvector1(nums.begin(), nums.begin() + index + 1);
    std::vector<int> subvector2(nums.begin() + index + 1, nums.end());
    
    return std::make_pair(subvector1, subvector2);
}

int main() {
    int num;
    std::vector<int> nums;
    
    // Read input from user
    while (std::cin >> num) {
        nums.push_back(num);
    }
    
    std::pair<std::vector<int>, std::vector<int>> result = cutVector(nums);
    
    // Print output
    for (int num : result.first) {
        std::cout << num << std::endl;
    }
    for (int num : result.second) {
        std::cout << num << std::endl;
    }
    
    return 0;
}