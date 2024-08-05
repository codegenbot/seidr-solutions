#include <iostream>
#include <vector>
#include <climits>
#include <numeric>

int main() {
    std::vector<int> nums;
    int n;
    while (std::cin >> n) {
        nums.push_back(n);
    }

    int idx = 0;
    int diff = INT_MAX;
    for (int i = 1; i < nums.size(); ++i) {
        int left_sum = std::accumulate(nums.begin(), nums.begin() + i, 0);
        int right_sum = std::accumulate(nums.begin() + i, nums.end(), 0);
        int current_diff = std::abs(left_sum - right_sum);
        if (current_diff < diff) {
            diff = current_diff;
            idx = i;
        }
    }

    for (int i = 0; i < idx; ++i) {
        std::cout << nums[i] << std::endl;
    }
    std::cout << std::endl;
    for (int i = idx; i < nums.size(); ++i) {
        std::cout << nums[i] << std::endl;
    }

    return 0;
}