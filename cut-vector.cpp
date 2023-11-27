#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cut_vector(const std::vector<int>& nums) {
    std::pair<std::vector<int>, std::vector<int>> result;
    int size = nums.size();
    int leftSum = 0;
    int rightSum = 0;

    // Calculate the sum of all elements
    for (int num : nums) {
        rightSum += num;
    }

    // Iterate through the vector and find the cut spot
    for (int i = 0; i < size; i++) {
        // Update the left and right sums
        leftSum += nums[i];
        rightSum -= nums[i];

        // Check if the difference is smaller than the current smallest difference
        if (abs(leftSum - rightSum) < abs(result.first.size() - result.second.size())) {
            result.first.assign(nums.begin(), nums.begin() + i + 1);
            result.second.assign(nums.begin() + i + 1, nums.end());
        }
    }

    return result;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::pair<std::vector<int>, std::vector<int>> result = cut_vector(nums);

    for (int num : result.first) {
        std::cout << num << std::endl;
    }
    for (int num : result.second) {
        std::cout << num << std::endl;
    }

    return 0;
}