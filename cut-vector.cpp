#include <iostream>
#include <vector>
#include <cmath>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int minDiff = INT_MAX;
    int cutIndex = -1;

    // Find the index where the difference between the sum of numbers on both sides is minimized
    for (int i = 1; i < nums.size(); i++) {
        int leftSum = 0;
        int rightSum = 0;

        for (int j = 0; j < i; j++) {
            leftSum += nums[j];
        }

        for (int j = i; j < nums.size(); j++) {
            rightSum += nums[j];
        }

        int diff = std::abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    // Create the two subvectors based on the cut index
    std::vector<int> leftSubvector(nums.begin(), nums.begin() + cutIndex);
    std::vector<int> rightSubvector(nums.begin() + cutIndex, nums.end());

    return std::make_pair(leftSubvector, rightSubvector);
}

int main() {
    int size;
    std::cin >> size;

    std::vector<int> nums(size);
    for (int i = 0; i < size; i++) {
        std::cin >> nums[i];
    }

    std::pair<std::vector<int>, std::vector<int>> subvectors = cutVector(nums);

    for (int num : subvectors.first) {
        std::cout << num << std::endl;
    }

    for (int num : subvectors.second) {
        std::cout << num << std::endl;
    }

    return 0;
}