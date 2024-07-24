#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    
    int left_sum = nums[0];
    int right_sum = std::accumulate(nums.begin() + 1, nums.end(), 0);
    int min_diff = std::abs(left_sum - right_sum);
    int cut_idx = 0;
    int i = 1, j = n - 1;

    while (i < j) {
        if (left_sum <= right_sum) {
            left_sum += nums[i];
            min_diff = std::min(min_diff, std::abs(left_sum - right_sum));
            cut_idx = (min_diff == std::abs(left_sum - right_sum)) ? i : cut_idx;
            i++;
        } else {
            right_sum += nums[j];
            min_diff = std::min(min_diff, std::abs(left_sum - right_sum));
            cut_idx = (min_diff == std::abs(left_sum - right_sum)) ? i : cut_idx;
            j--;
        }
    }
    
    for (int k = 0; k <= cut_idx; ++k) {
        std::cout << nums[k] << std::endl;
    }
    
    std::cout << std::endl;
    
    for (int k = cut_idx + 1; k < n; ++k) {
        std::cout << nums[k] << std::endl;
    }
    
    return 0;
}