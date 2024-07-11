#include <iostream>

int main() {
    std::vector<int> nums;
    int num;
    
    while (std::cin >> num) {
        nums.push_back(num);
    }
    
    int min_diff = INT_MAX;
    int cut_idx = -1;
    
    for (int i = 1; i < nums.size(); ++i) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; ++j) {
            left_sum += nums[j];
        }
        for (int j = i; j < nums.size(); ++j) {
            right_sum += nums[j];
        }
        int diff = std::abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
    }
    
    for (int i = 0; i < cut_idx; ++i) {
        std::cout << nums[i] << std::endl;
    }
    std::cout << std::endl;
    for (int i = cut_idx; i < nums.size(); ++i) {
        std::cout << nums[i] << std::endl;
    }
    
    return 0;
}