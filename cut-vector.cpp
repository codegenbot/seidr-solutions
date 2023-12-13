#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    size_t i;
    size_t n = nums.size();
    size_t cutIndex = 0;
    int leftSum = nums[0], rightSum = 0;

    if (n == 1) {
        return std::make_pair(nums, nums);
    }

    for (i = 1; i < n; i++) {
        rightSum += nums[i];
    }

    int minDiff = std::abs(leftSum - rightSum);

    for (i = 1; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];

        int diff = std::abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i + 1;
        }
    }

    std::vector<int> left;
    std::vector<int> right;

    for (i = 0; i < cutIndex; i++) {
        left.push_back(nums[i]);
    }

    for (i = cutIndex; i < n; i++) {
        right.push_back(nums[i]);
    }

    return std::make_pair(left, right);
}