#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cut_vector(const std::vector<int>& nums) {
    int n = nums.size();
    int left_sum = 0;
    int right_sum = 0;

    // Calculate the total sum of all numbers in the vector
    for (int i = 0; i < n; i++) {
        right_sum += nums[i];
    }

    // Iterate through each index and find the spot where the difference is minimum
    int min_diff = std::abs(left_sum - right_sum);
    int cut_index = 0;
    for (int i = 0; i < n; i++) {
        left_sum += nums[i];
        right_sum -= nums[i];

        int diff = std::abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    // Create the resulting subvectors
    std::vector<int> subvector1(nums.begin(), nums.begin() + cut_index + 1);
    std::vector<int> subvector2(nums.begin() + cut_index + 1, nums.end());

    return std::make_pair(subvector1, subvector2);
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