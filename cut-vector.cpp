#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int n;
    while (std::cin >> n) {
        nums.push_back(n);
    }
    
    int min_diff = INT_MAX;
    int cut_index = 0;
    for (int i = 1; i < nums.size(); ++i) {
        int diff = abs(std::accumulate(nums.begin(), nums.begin() + i, 0) - std::accumulate(nums.begin() + i, nums.end(), 0));
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i < cut_index; ++i) {
        std::cout << nums[i] << std::endl;
    }
    std::cout << std::endl;
    for (int i = cut_index; i < nums.size(); ++i) {
        std::cout << nums[i] << std::endl;
    }
    
    return 0;
}