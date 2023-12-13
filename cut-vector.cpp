```cpp
#include <vector>
#include <utility>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int leftSum = nums[0];
    int rightSum = 0;
    for (int i = 0; i < n; i++) {
        rightSum += nums[i];
    }
    int minDiff = std::abs(leftSum - rightSum);
    int cutIndex = 0;

    for (int i = 0; i < n; i++) {
        if (i > 0) {
            leftSum += nums[i];
            rightSum -= nums[i];
            int diff = std::abs(leftSum - rightSum);
            if (diff < minDiff) {
                minDiff = diff;
                cutIndex = i;
            }
        }
    }

    std::vector<int> leftSubvector(nums.begin(), nums.begin() + cutIndex + 1);
    std::vector<int> rightSubvector(nums.begin() + cutIndex + 1, nums.end());

    return std::make_pair(leftSubvector, rightSubvector);
}
```