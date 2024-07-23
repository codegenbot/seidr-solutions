#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums;
    int num;
    
    while (std::cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i < n; ++i) {
        int diff = std::abs(std::accumulate(nums.begin(), nums.begin() + i, 0) - std::accumulate(nums.begin() + i, nums.end(), 0));
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
    std::cout << std::endl;
    
    return 0;
}