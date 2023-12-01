#include <iostream>
#include <vector>
#include <utility>
#include <limits>
#include <cmath>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    size_t n = nums.size();
    unsigned long long diff = std::numeric_limits<unsigned long long>::max();
    size_t index = 0;

    if (n == 1) {
        return std::make_pair(nums, std::vector<int>());
    }

    for (size_t i = 0; i < n; i++) {
        unsigned long long leftSum = 0;
        unsigned long long rightSum = 0;

        for (size_t j = 0; j < i; j++) {
            leftSum += nums[j];
        }

        for (size_t j = i+1; j < n; j++) {
            rightSum += nums[j];
        }

        unsigned long long currentDiff = std::abs(leftSum - rightSum);

        if (currentDiff < diff) {
            diff = currentDiff;
            index = i;
        }
    }

    std::vector<int> leftSubvector(nums.begin(), nums.begin() + index + 1);
    std::vector<int> rightSubvector(nums.begin() + index + 1, nums.end());

    return std::make_pair(leftSubvector, rightSubvector);
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