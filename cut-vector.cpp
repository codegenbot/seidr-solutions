#include <iostream>
#include <vector>

std::vector<int> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int leftSum = 0;
    int rightSum = 0;

    // Calculate the sum of all numbers
    for (int i = 0; i < n; i++) {
        rightSum += nums[i];
    }

    int diff = std::abs(leftSum - rightSum);
    int idx = 0;

    // Find the spot where the difference is minimized
    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int newDiff = std::abs(leftSum - rightSum);
        if (newDiff < diff) {
            diff = newDiff;
            idx = i + 1;
        }
    }

    // Create the resulting subvectors
    std::vector<int> subvector1(nums.begin(), nums.begin() + idx);
    std::vector<int> subvector2(nums.begin() + idx, nums.end());

    return {subvector1, subvector2};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::vector<int> result1, result2;
    std::tie(result1, result2) = cutVector(nums);

    for (int num : result1) {
        std::cout << num << std::endl;
    }

    for (int num : result2) {
        std::cout << num << std::endl;
    }

    return 0;
}