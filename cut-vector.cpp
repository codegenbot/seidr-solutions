#include <iostream>
#include <vector>
#include <climits>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int index = -1;

    // Find the spot where the difference between the left and right sums is smallest
    for (int i = 1; i <= n; i++) {
        int leftSum = 0;
        int rightSum = 0;

        // Calculate the sum of the elements on the left side of the cut
        for (int j = 0; j < i; j++) {
            leftSum += nums[j];
        }

        // Calculate the sum of the elements on the right side of the cut
        for (int j = i; j < n; j++) {
            rightSum += nums[j];
        }

        int currentDiff = std::abs(leftSum - rightSum);

        if (currentDiff < diff) {
            diff = currentDiff;
            index = i;
        }
    }

    // Create two subvectors based on the cut position
    std::vector<int> left(nums.begin(), nums.begin() + index);
    std::vector<int> right(nums.begin() + index, nums.end());

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

    // Print the elements of the first subvector
    for (int i = 0; i < result.first.size(); i++) {
        std::cout << result.first[i] << " ";
    }
    std::cout << std::endl;

    // Print the elements of the second subvector
    for (int i = 0; i < result.second.size(); i++) {
        std::cout << result.second[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}