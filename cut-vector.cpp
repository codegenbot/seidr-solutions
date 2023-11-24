#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    int diff = INT_MAX;
    int index = -1;

    for (int i = 0; i < n; i++) {
        int leftSum = 0;
        int rightSum = 0;

        for (int j = 0; j <= i; j++) {
            leftSum += nums[j];
        }

        for (int j = i+1; j < n; j++) {
            rightSum += nums[j];
        }

        if (leftSum == rightSum || std::abs(leftSum - rightSum) < diff) {
            diff = std::abs(leftSum - rightSum);
            index = i;
        }
    }

    if (index == -1) {
        for (int num : nums) {
            std::cout << num << std::endl;
        }
    } else {
        std::vector<int> result1(nums.begin(), nums.begin() + index + 1);
        std::vector<int> result2(nums.begin() + index + 1, nums.begin() + n);

        for (int num : result1) {
            std::cout << num << std::endl;
        }

        std::cout << std::endl;

        for (int num : result2) {
            std::cout << num << std::endl;
        }
    }

    return 0;
}