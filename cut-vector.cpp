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
    
    int left_sum = 0;
    int right_sum = std::accumulate(nums.begin(), nums.end(), 0);
    int min_diff = INT_MAX;
    int cut_idx = -1;
    int left_idx = 0;
    int right_idx = n - 1;

    while (left_idx < right_idx) {
        if (left_sum < right_sum) {
            left_sum += nums[left_idx++];
        } else {
            right_sum -= nums[right_idx--];
        }
        
        int diff = std::abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_idx = left_idx;
        }
    }

    for (int i = 0; i < cut_idx; ++i) {
        std::cout << nums[i] << std::endl;
    }
    
    std::cout << std::endl;
    
    for (int i = cut_idx; i < n; ++i) {
        std::cout << nums[i] << std::endl;
    }
    
    return 0;
}