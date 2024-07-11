#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    std::vector<int> nums;
    int n;
    while (std::cin >> n) {
        nums.push_back(n);
    }
    
    int total_sum = std::accumulate(nums.begin(), nums.end(), 0);
    int current_sum = 0;
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 0; i < nums.size(); ++i) {
        current_sum += nums[i];
        int diff = std::abs(total_sum - 2 * current_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    std::vector<int> subvector1(nums.begin(), nums.begin() + cut_index + 1);
    std::vector<int> subvector2(nums.begin() + cut_index + 1, nums.end());
    
    for (int num : subvector1) {
        std::cout << num << std::endl;
    }
    
    for (int num : subvector2) {
        std::cout << num << std::endl;
    }
    
    return 0;
}