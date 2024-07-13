#include <utility>

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