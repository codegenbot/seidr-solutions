#include <iostream>
#include <vector>
#include <numeric>
#include <climits>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    int sum = std::accumulate(nums.begin(), nums.end(), 0);
    int prefix_sum = 0;
    int min_diff = INT_MAX;
    int cut_idx = -1;

    for (int i = 0; i < n; ++i) {
        prefix_sum += nums[i];
        int diff = std::abs(prefix_sum - (sum - prefix_sum));
        if (diff < min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
    }

    for (int i = 0; i <= cut_idx; ++i) {
        std::cout << nums[i] << std::endl;
    }
    for (int i = cut_idx + 1; i < n; ++i) {
        std::cout << nums[i] << std::endl;
    }

    return 0;
}