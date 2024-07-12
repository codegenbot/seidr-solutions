#include <iostream>
#include <climits>
#include <vector>

int main() {
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
    }
    
    int left_sum = 0;
    int right_sum = sum;
    int min_diff = INT_MAX;
    int cut_idx = -1;
    
    for (int i = 0; i < n; ++i) {
        left_sum += nums[i];
        right_sum -= nums[i];
        
        int diff = std::abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
    }
    
    for (int i = 0; i <= cut_idx; ++i) {
        std::cout << nums[i] << std::endl;
    }
    std::cout << 0 << std::endl;
    
    return 0;
}