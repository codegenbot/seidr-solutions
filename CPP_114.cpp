#include <vector>
#include <algorithm>

long long minSubArraySum(std::vector<long long> nums) {
    long long total = 0;
    long long min_sum = LLONG_MAX;

    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
        min_sum = std::min(min_sum, total);
    }

    return min_sum;
}