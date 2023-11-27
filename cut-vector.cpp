#include <iostream>
#include <vector>
#include <climits>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int minDiff = INT_MAX;
    int cutIndex = -1;

    // Find the spot where the difference is as small as possible
    for (int i = 1; i < n; i++) {
        int leftSum = 0;
        int rightSum = 0;

        // Calculate the sum of numbers on the left side of the cut
        for (int j = 0; j < i; j++) {
            leftSum += nums[j];
        }

        // Calculate the sum of numbers on the right side of the cut
        for (int j = i; j < n; j++) {
            rightSum += nums[j];
        }

        // Calculate the difference between the sums
        int diff = std::abs(leftSum - rightSum);

        // Update the minimum difference and cut index if necessary
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    // Create the two resulting subvectors
    std::vector<int> left(nums.begin(), nums.begin() + cutIndex);
    std::vector<int> right(nums.begin() + cutIndex, nums.end());

    return std::make_pair(left, right);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::pair<std::vector<int>, std::vector<int>> result = cutVector(nums);

    // Print the two resulting subvectors
    for (int num : result.first) {
        std::cout << num << std::endl;
    }
    for (int num : result.second) {
        std::cout << num << std::endl;
    }

    return 0;
}