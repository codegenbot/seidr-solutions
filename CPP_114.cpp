long long minSubArraySum(vector<long long> nums) {
    long long min_sum = INT_MAX;
    long long current_sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];
        if (current_sum > min_sum)
            return min_sum;
        else
            min_sum = min(min_sum, current_sum);
    }

    return min_sum;
}