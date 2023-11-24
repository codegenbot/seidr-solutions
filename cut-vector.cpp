#include <iostream>
#include <vector>
#include <climits>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int index = -1;

    for (int i = 0; i < n; i++) {
        int leftSum = 0;
        int rightSum = 0;

        for (int j = 0; j < i + 1; j++) {
            leftSum += nums[j];
        }

        for (int j = i; j < n; j++) {
            rightSum += nums[j];
        }

        if (leftSum == rightSum || abs(leftSum - rightSum) < diff) {
            diff = abs(leftSum - rightSum);
            index = i;
        }
    }

    return std::make_pair(std::vector<int>(nums.begin(), nums.begin() + index + 1),
                          std::vector<int>(nums.begin() + index + 1, nums.end()));
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

    std::cout << std::endl;

    return 0;
}