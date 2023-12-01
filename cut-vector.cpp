#include <vector>
#include <iostream>

std::vector<int> cut_vector(const std::vector<int>& nums) {
    int n = nums.size();
    int left_sum = 0;
    int right_sum = 0;
    for (int i = 0; i < n; i++) {
        right_sum += nums[i];
    }

    for (int i = 0; i < n; i++) {
        left_sum += nums[i];
        right_sum -= nums[i];
        if (left_sum == right_sum || std::abs(left_sum - right_sum) == 1) {
            return {nums.begin(), nums.begin() + i + 1, nums.begin() + i + 2, nums.end()};
        }
    }

    return {};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::vector<int> result = cut_vector(nums);
    for (int num : result) {
        std::cout << num << std::endl;
    }

    return 0;
}