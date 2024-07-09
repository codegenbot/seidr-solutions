#include <vector>
#include <climits>

long long minSubArraySum(std::vector<long long> nums) {
    long long min_sum = LLONG_MAX;
    long long current_sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];

        if (current_sum < min_sum) {
            min_sum = current_sum;
        }

        if (current_sum > 0) {
            current_sum = 0;
        }
    }

    if(min_sum == LLONG_MAX) {
        return -1; // Input array contains all zeros
    } else {
        return min_sum;
    }
}