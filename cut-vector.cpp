#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

int main() {
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int prefix_sum = 0;
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 0; i < n - 1; i++) {
        prefix_sum += nums[i];
        int suffix_sum = sum - prefix_sum;
        int diff = std::abs(prefix_sum - suffix_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i <= cut_index; i++) {
        std::cout << nums[i] << std::endl;
    }
    
    std::cout << std::endl;
    
    for (int i = cut_index + 1; i < n; i++) {
        std::cout << nums[i] << std::endl;
    }
    
    return 0;
}