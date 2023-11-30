#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cut_vector(const std::vector<int>& nums) {
    int totalSum = 0;
    for (int num : nums) {
        totalSum += num;
    }

    int leftSum = 0;
    int rightSum = totalSum;
    int minDiff = rightSum;
    int cutIndex = -1;

    for (int i = 0; i < nums.size(); i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
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

    std::pair<std::vector<int>, std::vector<int>> result = cut_vector(nums);

    for (int num : result.first) {
        std::cout << num << std::endl;
    }
    for (int num : result.second) {
        std::cout << num << std::endl;
    }

    return 0;
}