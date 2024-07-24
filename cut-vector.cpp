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
    
    left_sum = 0; // Change initialization of left_sum to 0

    for (int i = 0; i < n - 1; ++i) { // Update loop condition to iterate till n-1
        left_sum += nums[i];
        int right_sum = sum - left_sum;
        int diff = std::abs(left_sum - right_sum);
        if (diff <= min_diff) { // Update condition to consider equal difference
            min_diff = diff;
            cut_idx = i + 1; // Update cut_idx for correct index
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