Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    long long min_sum = LLONG_MAX;
    long long curr_sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        curr_sum += nums[i];
        min_sum = min(min_sum, curr_sum);
        if (curr_sum > 0) {
            curr_sum = 0;
        }
    }

    return min_sum;
}