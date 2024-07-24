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
    
    int sum = std::accumulate(nums.begin(), nums.end(), 0);
    int left_sum = 0;
    int min_diff = INT_MAX;
    int cut_idx = -1;

    for (int i = 0; i < n-1; ++i) {
        left_sum += nums[i];
        int right_sum = sum - left_sum;
        int diff = std::abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
        if (min_diff == 0) break;
    }
    
    for (int i = 0; i <= cut_idx; ++i) {
        std::cout << nums[i] << std::endl;
    }
    
    std::cout << std::endl;
    
    for (int i = cut_idx + 1; i < n; ++i) {
        std::cout << nums[i] << std::endl;
    }
    
    return 0;
}