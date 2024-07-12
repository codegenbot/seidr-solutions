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

    int min_diff = INT_MAX;
    int cut_index = -1;

    for (int i = 0; i < n - 1; ++i) {
        int diff = std::abs(std::accumulate(nums.begin(), nums.begin() + i + 1, 0) - std::accumulate(nums.begin() + i + 1, nums.end(), 0));
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    for (int i = 0; i <= cut_index; ++i) {
        std::cout << nums[i] << std::endl;
    }
    std::cout << std::endl;
    for (int i = cut_index + 1; i < n; ++i) {
        std::cout << nums[i] << std::endl;
    }

    return 0;
}