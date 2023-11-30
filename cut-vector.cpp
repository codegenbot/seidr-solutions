#include <vector>
#include <iostream>
#include <climits>
#include <algorithm>

std::vector<std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int index = -1;

    int totalSum = 0;
    for (int num : nums) {
        totalSum += num;
    }

    int leftSum = 0;
    int rightSum = totalSum;

    for (int i = 0; i < n - 1; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int currentDiff = std::abs(leftSum - rightSum);

        if (currentDiff < diff) {
            diff = currentDiff;
            index = i;
        }
    }

    if (index == -1) return { nums };

    std::vector<int> leftSubvector(nums.begin(), nums.begin() + index + 1);
    std::vector<int> rightSubvector(nums.begin() + index + 1, nums.end());

    return { leftSubvector, rightSubvector };
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::vector<std::vector<int>> subvectors = cutVector(nums);

    for (const auto& subvector : subvectors) {
        for (int num : subvector) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}