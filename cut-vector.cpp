#include <iostream>
#include <vector>
#include <climits>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int index = -1;

    for (int i = 0; i < n - 1; i++) {
        int left_sum = 0;
        int right_sum = 0;

        for (int j = 0; j <= i; j++) {
            left_sum += nums[j];
        }

        for (int j = i + 1; j < n; j++) {
            right_sum += nums[j];
        }

        if (std::abs(left_sum - right_sum) < diff) {
            diff = std::abs(left_sum - right_sum);
            index = i;
        }
    }

    std::vector<int> left_subvector(nums.begin(), nums.begin() + index + 1);
    std::vector<int> right_subvector(nums.begin() + index + 1, nums.end());

    return std::make_pair(left_subvector, right_subvector);
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