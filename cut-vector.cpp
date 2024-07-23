#include <iostream>
#include <vector>
#include <climits>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    
    int min_diff = std::numeric_limits<int>::max();
    int cut_idx = -1;
    int sum_left = 0;
    int sum_right = std::accumulate(nums.begin(), nums.end(), 0);
    
    for (int i = 0; i < n; ++i) {
        sum_left += nums[i];
        sum_right -= nums[i];
        int diff = std::abs(sum_left - sum_right);
        if (diff < min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
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