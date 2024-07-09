Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    long long curr_sum = 0, min_sum = LONG_LONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        curr_sum += nums[i];
        if (curr_sum > min_sum)
            return min_sum;
        else
            min_sum = min(min_sum, curr_sum);
    }
    return min_sum;
}