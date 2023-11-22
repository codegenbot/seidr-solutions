#include <vector>
#include <iostream>

std::vector<int> cut_vector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int cutIndex = -1;

    // Find the index where the difference is minimized
    for (int i = 1; i < n; i++) {
        int leftSum = 0;
        int rightSum = 0;

        // Calculate the sum of elements on the left and right side of the cut
        for (int j = 0; j < i; j++) {
            leftSum += nums[j];
        }
        for (int j = i; j < n; j++) {
            rightSum += nums[j];
        }

        // Update the cut index and difference if the current difference is smaller
        if (abs(leftSum - rightSum) < diff) {
            diff = abs(leftSum - rightSum);
            cutIndex = i;
        }
    }

    // Create the two resulting subvectors
    std::vector<int> leftSubvector(nums.begin(), nums.begin() + cutIndex);
    std::vector<int> rightSubvector(nums.begin() + cutIndex, nums.end());

    return {leftSubvector, rightSubvector};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::vector<int> result = cut_vector(nums);

    // Print the two resulting subvectors
    for (int i = 0; i < result[0].size(); i++) {
        std::cout << result[0][i] << std::endl;
    }
    for (int i = 0; i < result[1].size(); i++) {
        std::cout << result[1][i] << std::endl;
    }

    return 0;
}