#include <iostream>
#include <vector>
#include <cmath>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = std::abs(nums[0] - nums[n-1]);
    int cutIndex = 0;

    for (int i = 1; i < n-1; i++) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j <= i; j++) {
            leftSum += nums[j];
        }
        for (int j = i+1; j < n; j++) {
            rightSum += nums[j];
        }

        int currDiff = std::abs(leftSum - rightSum);
        if (currDiff < diff) {
            diff = currDiff;
            cutIndex = i;
        }
    }

    std::vector<int> leftSubvector(nums.begin(), nums.begin() + cutIndex + 1);
    std::vector<int> rightSubvector(nums.begin() + cutIndex + 1, nums.end());

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
        std::cout << num << std::endl;
    }

    for (int num : result.second) {
        std::cout << num << std::endl;
    }

    return 0;
}