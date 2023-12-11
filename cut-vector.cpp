#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cut_vector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int idx = -1;

    // Find the spot where the difference is as small as possible
    for (int i = 0; i < n - 1; i++) {
        int left_sum = 0;
        int right_sum = 0;

        // Calculate the sum of numbers on both sides of the cut
        for (int j = 0; j <= i; j++) {
            left_sum += nums[j];
        }
        for (int j = i + 1; j < n; j++) {
            right_sum += nums[j];
        }

        // Update the difference and index if necessary
        int curr_diff = abs(left_sum - right_sum);
        if (curr_diff < diff) {
            diff = curr_diff;
            idx = i;
        }
    }

    // Create the resulting subvectors
    std::vector<int> left_subvector(nums.begin(), nums.begin() + idx + 1);
    std::vector<int> right_subvector(nums.begin() + idx + 1, nums.end());

    return std::make_pair(left_subvector, right_subvector);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    // Call the cut_vector function
    std::pair<std::vector<int>, std::vector<int>> result = cut_vector(nums);

    // Print the resulting subvectors
    for (int num : result.first) {
        std::cout << num << std::endl;
    }
    for (int num : result.second) {
        std::cout << num << std::endl;
    }

    return 0;
}