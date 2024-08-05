#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

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
        
        if (std::abs(left_sum - right_sum) < diff) {
            diff = std::abs(left_sum - right_sum);
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