#include <iostream>
#include <vector>

long long minSubArraySum(std::vector<long long> nums) {
    long long total = 0;
    long long min_sum = LLONG_MAX;

    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
        if (total < min_sum) {
            min_sum = total;
        }
        if (total > 0) {
            total = 0;
        }
    }

    return min_sum;
}

int main() {
    if (minSubArraySum({1, -1}) != -1) {
        std::cerr << "Error: Expected result is -1 but got " << minSubArraySum({1, -1}) << std::endl;
        return 1;
    }
    return 0;
}