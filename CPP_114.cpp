#include <algorithm>

long long minSubArraySum(vector<long long> nums) {
    long long curr_sum = 0;
    long long res = LONG_LONG_MAX;

    for (long long num : nums) {
        curr_sum += num;
        res = min(res, curr_sum);
        if (curr_sum < 0) {
            curr_sum = 0;
        }
    }

    return res;
}