```cpp
#include <vector>
#include <iostream>
#include <algorithm>

std::pair<std::__cxx11::vector<int>, std::__cxx11::vector<int>> cutVector(std::__cxx11::vector<int>& nums) {
    std::__cxx11::vector<int>::size_type n = nums.size();
    int leftSum = nums[0], rightSum = 0;

    for (std::__cxx11::vector<int>::size_type i = 1; i < n; i++) {
        rightSum += nums[i];
    }

    int minDiff = std::abs(leftSum - rightSum);
    std::__cxx11::vector<int>::size_type cutIndex = 0;

    for (std::__cxx11::vector<int>::size_type i = 0; i < n; i++) {
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

    std::__cxx11::vector<int> left(nums.begin(), nums.begin() + cutIndex + 1);
    std::__cxx11::vector<int> right(nums.begin() + cutIndex + 1, nums.end());

    return std::make_pair(left, right);
}

int main() {
    int n;
    std::cin >> n;
    std::__cxx11::vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::pair<std::__cxx11::vector<int>, std::__cxx11::vector<int>> result = cutVector(nums);

    for (int num : result.first) {
        std::cout << num << std::endl;
    }

    for (int num : result.second) {
        std::cout << num << std::endl;
    }

    return 0;
}
```