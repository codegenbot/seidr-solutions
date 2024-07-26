#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>

int main() {
    std::vector<int> nums;
    int num;
    
    while (std::cin >> num) {
        nums.push_back(num);
    }
    
    int total_sum = std::accumulate(nums.begin(), nums.end(), 0);
    int left_sum = 0;
    int right_sum = total_sum;
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 0; i < nums.size(); ++i) {
        left_sum += nums[i];
        right_sum -= nums[i];
        
        int current_diff = std::abs(left_sum - right_sum);
        if (current_diff < min_diff) {
            min_diff = current_diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i <= cut_index; ++i) {
        std::cout << nums[i] << std::endl;
    }
    
    std::cout << 0 << std::endl;
    
    for (int i = cut_index + 1; i < nums.size(); ++i) {
        std::cout << nums[i] << std::endl;
    }
    
    std::cout << 0 << std::endl;
    
    return 0;
}