#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int totalSum = 0;
    for (int num : nums) {
        totalSum += num;
    }

    int leftSum = 0;
    int rightSum = totalSum;
    int minDiff = INT_MAX;
    std::pair<std::vector<int>, std::vector<int>> result;

    for (int i = 0; i < nums.size() - 1; ++i) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int diff = abs(leftSum - rightSum);

        if (diff < minDiff || (diff == minDiff && abs(leftSum - rightSum) <= abs(2 * leftSum - totalSum))) {
            minDiff = diff;
            result.first = std::vector<int>(nums.begin(), nums.begin() + i + 1);
            result.second = std::vector<int>(nums.begin() + i + 1, nums.end());
        }
    }

    return result;
}

int main() {
    // Example code to test cutVector function
    std::vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6};
    auto result = cutVector(nums);

    // Output the two subvectors
    for (int num : result.first) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    for (int num : result.second) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}