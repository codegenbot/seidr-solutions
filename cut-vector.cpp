#include <iostream>
#include <vector>
#include <climits>
#include <numeric>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    int min_diff = INT_MAX;
    int cut_idx = -1;
    for (int i = 1; i < n; ++i) {
        int diff = std::abs(std::accumulate(nums.begin(), nums.begin() + i, 0) - std::accumulate(nums.begin() + i, nums.end(), 0));
        if (diff < min_diff) {
            min_diff = diff;
            cut_idx = i;
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