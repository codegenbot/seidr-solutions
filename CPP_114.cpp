Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    long long curr_sum = 0, min_sum = LLONG_MAX;
    for (auto num : nums) {
        curr_sum += num;
        if (curr_sum < min_sum) min_sum = curr_sum;
        if (curr_sum > 0) curr_sum = 0;
    }
    return min_sum;
}