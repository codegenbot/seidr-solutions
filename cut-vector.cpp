#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int minDiff = INT_MAX;
    int idx = -1;

    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == 0 || i == nums.size() - 1) continue;
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j <= i; ++j) leftSum += nums[j];
        for (int j = i + 1; j < nums.size(); ++j) rightSum += nums[j];
        if (abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            idx = i;
        }
    }

    std::vector<int> left, right;
    for (int i = 0; i <= idx; ++i) left.push_back(nums[i]);
    for (int i = idx + 1; i < nums.size(); ++i) right.push_back(nums[i]);

    return {left, right};
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (auto& num : nums) std::cin >> num;

    auto res = cutVector(nums);

    std::cout << "Left: ";
    for (const auto& num : res.first) std::cout << num << " ";
    std::cout << "\nRight: ";
    for (const auto& num : res.second) std::cout << num << " ";
    std::cout << "\n";

    return 0;
}