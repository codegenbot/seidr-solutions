```cpp
#include <iostream>
#include <vector>
#include <climits>

std::pair<std::vector<int>, std::vector<int>> cut_vector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int cut_index = -1;

    int total_sum = 0;
    for (int num : nums) {
        total_sum += num;
    }

    int left_sum = 0;
    for (int i = 0; i < n; i++) {
        int right_sum = total_sum - left_sum;
        int current_diff = abs(left_sum - right_sum);

        if (current_diff < diff) {
            diff = current_diff;
            cut_index = i;
        }

        left_sum += nums[i];
    }

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
```