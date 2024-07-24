#include <iostream>
#include <vector>
#include <cmath>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums, int cut_index) {
    int n = nums.size();
    int min_diff = std::abs(nums[cut_index] - nums[cut_index + 1]);
    int best_cut_index = cut_index;

    for (int i = cut_index + 1; i < n - 1; i++) {
        int current_diff = std::abs(nums[i] - nums[i + 1]);
        if (current_diff < min_diff) {
            min_diff = current_diff;
            best_cut_index = i;
        }
    }

    std::vector<int> subvector1(nums.begin(), nums.begin() + best_cut_index + 1);
    std::vector<int> subvector2(nums.begin() + best_cut_index + 1, nums.end());
    
    return std::make_pair(subvector1, subvector2);
}

int main() {
    std::vector<int> nums = {1, 3, 5, 7, 3, 2, 5};
    int cut_index = 2;

    auto result = cutVector(nums, cut_index);

    for (int num : result.first) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    for (int num : result.second) {
        std::cout << num << " ";
    }
    
    return 0;
}