#include <iostream>
#include <vector>
#include <climits>

int main() {
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 1; i < n; ++i) {
        int sum_left = 0, sum_right = 0;
        for (int j = 0; j < i; ++j) {
            sum_left += nums[j];
        }
        for (int j = i; j < n; ++j) {
            sum_right += nums[j];
        }
        
        int diff = std::abs(sum_left - sum_right);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i < cut_index; ++i) {
        std::cout << nums[i] << std::endl;
    }
    std::cout << std::endl;
    for (int i = cut_index; i < n; ++i) {
        std::cout << nums[i] << std::endl;
    }
    
    return 0;
}