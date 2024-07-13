#include <vector>
#include <iostream>

long long minSubArraySum(std::vector<long long> nums) {
    long long sum = 0, min_sum = LONG_LONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < min_sum)
            min_sum = sum;
    }
    return min_sum;
}