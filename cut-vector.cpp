#include <vector>
#include <iostream>
#include <climits>
#include <algorithm>
#include <numeric>

std::vector<std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int index = -1;

    int totalSum = std::accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0;

    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        int rightSum = totalSum - leftSum;
        int currentDiff = std::abs(leftSum - rightSum);

        if (currentDiff < diff) {
            diff = currentDiff;
            index = i;
        }
    }

    if (index == -1 || index == n) return { nums };

    std::vector<int> leftSubvector(nums.begin(), nums.begin() + index);
    std::vector<int> rightSubvector(nums.begin() + index, nums.end());

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