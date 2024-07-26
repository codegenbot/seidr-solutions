#include <iostream>
std::vector<int> cut_vector(std::vector<int> nums) {
    int n = nums.size();
    int total_sum = std::accumulate(nums.begin(), nums.end(), 0);
    int left_sum = 0;
    int right_sum = total_sum;
    int min_diff = INT_MAX;
    int cut_index = -1;

    for (int i = 0; i < n; ++i) {
        left_sum += nums[i];
        right_sum -= nums[i];
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    return {std::vector<int>(nums.begin(), nums.begin() + cut_index + 1),
            std::vector<int>(nums.begin() + cut_index + 1, nums.end())};
}