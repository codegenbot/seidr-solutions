#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
    }

    int n = nums.size();
    int diff = INT_MAX;
    int idx = -1;
    
    for (int i = 1; i < n; ++i) {
        int left_sum = std::accumulate(nums.begin(), nums.begin() + i, 0);
        int right_sum = std::accumulate(nums.begin() + i, nums.end(), 0);
        int current_diff = std::abs(left_sum - right_sum);
        
        if (current_diff < diff) {
            diff = current_diff;
            idx = i;
        }
    }
    
    for (int i = 0; i < idx; ++i) {
        std::cout << nums[i] << std::endl;
    }
    
    std::cout << 0 << std::endl;
    
    for (int i = idx; i < n; ++i) {
        std::cout << nums[i] << std::endl;
    }
    
    std::cout << 0 << std::endl;
    
    return 0;
}