```cpp
std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int leftSum = nums[0], rightSum = 0;

    if (n == 1) {
        return std::make_pair(nums, nums);
    }

    // Calculate the sum of all elements in the vector
    for (int i = 1; i < n; i++) {
        rightSum += nums[i];
    }

    int minDiff = std::abs(leftSum - rightSum);
    int cutIndex = 0;

    // Find the spot where the difference is as small as possible
    for (int i = 1; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];

        int diff = std::abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i + 1;
        }
    }

    // Split the vector into two subvectors based on the cutIndex
    std::vector<int> left(nums.begin(), nums.begin() + cutIndex);
    std::vector<int> right(nums.begin() + cutIndex, nums.end());

    return std::make_pair(left, right);
}
```