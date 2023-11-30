#include <iostream>
#include <vector>
#include <cmath>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int left_sum = 0;
    int right_sum = 0;
    int min_diff = INT_MAX;
    int cut_index = -1;

    // Calculate the sum of all elements in the vector
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += nums[i];
    }

    // Iterate through the vector to find the cut index
    for (int i = 0; i < n; i++) {
        left_sum += nums[i];
        right_sum = total_sum - left_sum;
        int diff = std::abs(left_sum - right_sum);

        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    // Create the two subvectors
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

    std::pair<std::vector<int>, std::vector<int>> result = cutVector(nums);

    for (int num : result.first) {
        std::cout << num << std::endl;
    }
    for (int num : result.second) {
        std::cout << num << std::endl;
    }

    return 0;
}