#include <iostream>
#include <vector>
#include <limits>

long long minSubArraySum(std::vector<long long> nums) {
    long long min_sum = std::numeric_limits<long long>::max();
    long long current_sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];
        if (current_sum > 0) {
            min_sum = std::min(min_sum, current_sum);
        } else {
            current_sum = 0;
        }
    }

    return min_sum == std::numeric_limits<long long>::max() ? 0 : min_sum;
}

int main() {
    std::cout << minSubArraySum({1, -1}) << std::endl;
    return 0;
}