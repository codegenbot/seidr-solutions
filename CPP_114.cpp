Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    long long min_sum = INT_MAX, current_sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];
        if (current_sum > 0)
            min_sum = min(min_sum, current_sum);
    }
    return min_sum;
}