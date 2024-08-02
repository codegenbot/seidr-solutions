#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int minDiff = INT_MAX;
    int cutIndex = -1;

    for (int i = 0; i < nums.size() - 1; ++i) {
        int diff = abs(nums[i] - nums[i + 1]);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    std::vector<int> left, right;

    for (int i = 0; i < cutIndex; ++i) {
        left.push_back(nums[i]);
    }

    for (int i = cutIndex + 1; i < nums.size(); ++i) {
        right.push_back(nums[i]);
    }

    return {left, right};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (auto& num : nums) {
        std::cin >> num;
    }

    auto result = cutVector(nums);

    for (const auto& num : result.first) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    for (const auto& num : result.second) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}