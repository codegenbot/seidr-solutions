#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    std::ios_base::sync_with_stdio(false);

    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
    }

    int min_diff = INT_MAX;
    size_t cut_index = 0;

    for (size_t i = 1; i < nums.size(); ++i) {
        int diff = std::abs(std::accumulate(nums.begin(), nums.begin() + i, 0) - std::accumulate(nums.begin() + i, nums.end(), 0));
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    for (size_t i = 0; i < cut_index; ++i) {
        std::cout << nums[i] << std::endl;
    }
    std::cout << 0 << std::endl;
    for (size_t i = cut_index; i < nums.size(); ++i) {
        std::cout << nums[i] << std::endl;
    }
    std::cout << 0 << std::endl;

    return 0;
}