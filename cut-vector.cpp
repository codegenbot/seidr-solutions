```
#include <utility>

std::pair<std::vector<int>, std::vector<int>> cutVector(std::vector<int>& nums) {
    std::size_t n = nums.size();
    int leftSum = 0, rightSum = std::accumulate(nums.begin(), nums.end(), 0);

    int minDiff = std::abs(leftSum - rightSum);
    std::size_t cutIndex = 0;

    for (std::size_t i = 0; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int diff = std::abs(leftSum - rightSum);

        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    std::vector<int> left(nums.begin(), nums.begin() + cutIndex + 1);
    std::vector<int> right(nums.begin() + cutIndex + 1, nums.end());

    return std::make_pair(left, right);
}
```