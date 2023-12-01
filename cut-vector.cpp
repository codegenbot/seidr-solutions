#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int minDiff = INT_MAX;
    int cutIndex = -1;

    // Calculate the sum of all numbers in the vector
    int totalSum = 0;
    for (int num : nums) {
        totalSum += num;
    }

    // Iterate through each index to find the cut spot
    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum;
        int diff = abs(leftSum - rightSum);

        // Check if the current difference is smaller than the minimum difference found so far
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }

        leftSum += nums[i];
    }

    // Create the two resulting subvectors
    std::vector<int> subvector1(nums.begin(), nums.begin() + cutIndex + 1);
    std::vector<int> subvector2(nums.begin() + cutIndex + 1, nums.end());

    return std::make_pair(subvector1, subvector2);
}

int main() {
    // Read the input vector from the user
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    // Call the cutVector function to get the resulting subvectors
    std::pair<std::vector<int>, std::vector<int>> result = cutVector(nums);

    // Print the resulting subvectors
    for (int num : result.first) {
        std::cout << num << std::endl;
    }
    for (int num : result.second) {
        std::cout << num << std::endl;
    }

    return 0;
}