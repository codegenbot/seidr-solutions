#include <iostream>
#include <vector>
#include <algorithm>

std::pair<std::vector<int>, std::vector<int>> cut_vector(const std::vector<int>& nums) {
    int n = nums.size();
    std::pair<std::vector<int>, std::vector<int>> result;

    int diff = INT_MAX;
    int index = -1;

    for (int i = 0; i < n - 1; i++) {
        int sum1 = 0, sum2 = 0;

        for (int j = 0; j <= i; j++) {
            sum1 += nums[j];
        }

        for (int j = i + 1; j < n; j++) {
            sum2 += nums[j];
        }

        int curr_diff = std::abs(sum1 - sum2);

        if (curr_diff < diff) {
            diff = curr_diff;
            index = i;
        }
    }

    for (int i = 0; i <= index; i++) {
        result.first.push_back(nums[i]);
    }

    for (int i = index + 1; i < n; i++) {
        result.second.push_back(nums[i]);
    }

    return result;
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