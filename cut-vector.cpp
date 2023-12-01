#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int cutIndex = -1;

    for (int i = 0; i < n - 1; i++) {
        int leftSum = 0;
        int rightSum = 0;

        for (int j = 0; j <= i; j++) {
            leftSum += nums[j];
        }

        for (int j = i + 1; j < n; j++) {
            rightSum += nums[j];
        }

        int currDiff = abs(leftSum - rightSum);
        if (currDiff < diff) {
            diff = currDiff;
            cutIndex = i;
        }
    }

    std::vector<int> leftSub(nums.begin(), nums.begin() + cutIndex + 1);
    std::vector<int> rightSub(nums.begin() + cutIndex + 1, nums.end());
    return std::make_pair(leftSub, rightSub);
}

int main() {
    std::vector<int> nums;
    int num;

    while (std::cin >> num) {
        nums.push_back(num);
    }

    auto subVectors = cutVector(nums);

    for (auto num : subVectors.first) {
        std::cout << num << std::endl;
    }

    for (auto num : subVectors.second) {
        std::cout << num << std::endl;
    }

    return 0;
}