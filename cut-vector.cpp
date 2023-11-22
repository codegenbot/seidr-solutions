#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cut_vector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int index = -1;

    for (int i = 0; i < n; i++) {
        int left_sum = 0;
        int right_sum = 0;

        // Calculate the sum of elements on the left side of the cut
        for (int j = 0; j < i; j++) {
            left_sum += nums[j];
        }

        // Calculate the sum of elements on the right side of the cut
        for (int j = i; j < n; j++) {
            right_sum += nums[j];
        }

        // Calculate the absolute difference between the sums
        int current_diff = abs(left_sum - right_sum);

        // Update the minimum difference and the index of the cut
        if (current_diff < diff) {
            diff = current_diff;
            index = i;
        }
    }

    // Create the two subvectors
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

    std::pair<std::vector<int>, std::vector<int>> result = cut_vector(nums);

    for (int num : result.first) {
        std::cout << num << std::endl;
    }
    for (int num : result.second) {
        std::cout << num << std::endl;
    }

    return 0;
}