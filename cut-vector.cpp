#include <iostream>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    
    int min_diff = INT_MAX, cut_index = 0;
    for (int i = 1; i < n; ++i) {
        int left_sum = std::accumulate(nums.begin(), nums.begin() + i, 0);
        int right_sum = std::accumulate(nums.begin() + i, nums.end(), 0);
        int diff = std::abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i < cut_index; ++i) {
        std::cout << nums[i] << std::endl;
    }
    std::cout << 0 << std::endl;
    for (int i = cut_index; i < n; ++i) {
        std::cout << nums[i] << std::endl;
    }
    std::cout << 0 << std::endl;
    
    return 0;
}