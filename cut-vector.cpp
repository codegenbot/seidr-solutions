#include <iostream>
#include <utility>
#include <vector>
#include <cmath>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = std::abs(nums[0] - nums[n - 1]);
    int index = 0;
    bool foundEqual = false;

    for (int i = 1; i < n - 1; i++) {
        int leftSum = 0;
        int rightSum = 0;

        for (int j = 0; j < i; j++) {
            leftSum += nums[j];
        }

        for (int j = i; j < n; j++) {
            rightSum += nums[j];
        }

        if (leftSum == rightSum) {
            index = i;
            foundEqual = true;
            break;
        }

        int currentDiff = std::abs(leftSum - rightSum);

        if (currentDiff < diff) {
            diff = currentDiff;
            index = i;
        }
    }

    if (foundEqual) {
        std::vector<int> left(nums.begin(), nums.begin() + index + 1);
        std::vector<int> right(nums.begin() + index + 1, nums.end());
        return std::make_pair(left, right);
    } else {
        std::vector<int> left(nums.begin(), nums.begin() + index);
        std::vector<int> right(nums.begin() + index, nums.end());
        return std::make_pair(left, right);
    }
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::pair<std::vector<int>, std::vector<int>> result = cutVector(nums);

    for (int num : result.first) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    for (int num : result.second) {
        std::cout << num << " ";
    }

    return 0;
}