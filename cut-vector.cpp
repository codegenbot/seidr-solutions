#include <vector>
#include <iostream>
#include <climits>
#include <algorithm>

std::vector<std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> prefixSum(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefixSum[i] = prefixSum[i - 1] + nums[i - 1];
    }

    int diff = INT_MAX;
    int index = -1;

    for (int i = 1; i < n; i++) {
        int leftSum = prefixSum[i];
        int rightSum = prefixSum[n] - prefixSum[i];
        int currentDiff = std::abs(leftSum - rightSum);

        if (currentDiff < diff) {
            diff = currentDiff;
            index = i;
        }
    }

    if (index == -1) return { nums };

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