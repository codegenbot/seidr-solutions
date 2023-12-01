#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int totalSum = 0;
    for (int num : nums) {
        totalSum += num;
    }

    int leftSum = 0;
    int minDiff = totalSum;
    int cutIdx = 0;

    for (int i = 0; i < nums.size(); i++) {
        leftSum += nums[i];
        int rightSum = totalSum - leftSum;
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIdx = i;
        }
    }

    std::vector<int> left(nums.begin(), nums.begin() + cutIdx + 1);
    std::vector<int> right(nums.begin() + cutIdx + 1, nums.end());

    return std::make_pair(left, right);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::pair<std::vector<int>, std::vector<int>> subVectors = cutVector(nums);

    for (int num : subVectors.first) {
        std::cout << num << std::endl;
    }

    for (int num : subVectors.second) {
        std::cout << num << std::endl;
    }

    return 0;
}