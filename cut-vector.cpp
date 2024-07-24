#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

int main() {
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
    }

    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
    }
    int half_sum = sum / 2;

    int prefix_sum = 0;
    int best_diff = INT_MAX;
    int cut_index = 0;
    for (int i = 0; i < n; ++i) {
        prefix_sum += nums[i];
        int diff = std::abs(prefix_sum - half_sum);
        if (diff < best_diff) {
            best_diff = diff;
            cut_index = i;
        }
    }

    for (int i = 0; i <= cut_index; ++i) {
        std::cout << nums[i] << std::endl;
    }
    std::cout << 0 << std::endl;

    return 0;
}