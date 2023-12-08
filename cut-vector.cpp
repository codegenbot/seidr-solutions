```cpp
std::pair<std::vector<int>, std::vector<int>> cutVector(std::vector<int>& nums) {
    size_t n = nums.size();
    int leftSum = nums[0], rightSum = 0;

    for (size_t i = 0; i < n - 1; i++) {
        rightSum += nums[i];
    }

    int minDiff = std::abs(leftSum - rightSum);
    size_t cutIndex = 0;

    for (size_t i = 0; i < n - 1; i++) {
        if (i < n - 2) {
            leftSum += nums[i + 1];
            rightSum -= nums[i + 1];
        }
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