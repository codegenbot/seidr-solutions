#include <iostream>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    
    int diff = INT_MAX;
    int idx = -1;
    for (int i = 1; i < n; ++i) {
        int left_sum = std::accumulate(nums.begin(), nums.begin() + i, 0);
        int right_sum = std::accumulate(nums.begin() + i, nums.end(), 0);
        int curr_diff = abs(left_sum - right_sum);
        if (curr_diff < diff) {
            diff = curr_diff;
            idx = i;
        }
    }
    
    for (int i = 0; i < idx; ++i) {
        std::cout << nums[i] << std::endl;
    }
    std::cout << std::endl;
    for (int i = idx; i < n; ++i) {
        std::cout << nums[i] << std::endl;
    }
    
    return 0;
}