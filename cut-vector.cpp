```cpp
#include <vector>
#include <iostream>
#include <utility>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    std::size_t n = nums.size();
    int leftSum = nums[0], rightSum = 0;

    for (std::size_t i = 1; i < n; ++i) {
        rightSum += nums[i];
    }

    int minDiff = std::abs(leftSum - rightSum);
    std::size_t cutIndex = 0;

    for (std::size_t i = 0; i < n; ++i) {
        if (i < n - 1) {
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

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    std::pair<std::vector<int>, std::vector<int>> result = cutVector(nums);

    for (int num : result.first) {
        std::cout << num << std::endl;
    }

    for (int num : result.second) {
        std::cout << num << std::endl;
    }

    return 0;
}
```