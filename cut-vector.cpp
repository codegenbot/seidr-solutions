```cpp
#include <vector>
#include <iostream>
#include <algorithm>

std::pair<std::vector<int>, std::vector<int>> cutVector(std::vector<int>& nums) {
    std::size_t size = nums.size();
    int leftSum = nums[0], rightSum = 0;

    for (std::size_t i = 1; i < size; i++) {
        rightSum += nums[i];
    }

    int minDiff = std::abs(leftSum - rightSum);
    std::size_t cutIndex = 0;

    for (std::size_t i = 0; i < size; i++) {
        if (i < size - 1) {
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
    int size;
    std::cin >> size;
    std::vector<int> nums(size);

    for (int i = 0; i < size; i++) {
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