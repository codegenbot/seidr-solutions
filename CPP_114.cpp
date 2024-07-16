#include <vector>
#include <climits>

long long minSubArraySum(std::vector<long long> nums) {
    long long min_sum = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        long long sum = 0;
        for (int j = i; j < nums.size(); j++) {
            sum += nums[j];
            min_sum = std::min(min_sum, sum);
        }
    }
    return min_sum;
}