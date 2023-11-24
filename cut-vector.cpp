#include <iostream>
#include <vector>
#include <climits>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    int diff = INT_MAX;
    int index = -1;

    for (int i = 0; i < n-1; i++) {
        int leftSum = 0;
        int rightSum = 0;

        for (int j = 0; j <= i; j++) {
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

    std::vector<int> result1(nums.begin(), nums.begin() + index + 1);
    std::vector<int> result2(nums.begin() + index + 1, nums.end());

    for (int num : result1) {
        std::cout << num << std::endl;
    }

    std::cout << std::endl;

    for (int num : result2) {
        std::cout << num << std::endl;
    }

    return 0;
}