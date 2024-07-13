long long minSubArraySum(vector<long long> nums){
    long long curr_sum = 0, min_sum = LONG_LONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        curr_sum += nums[i];
        if (curr_sum < min_sum) {
            min_sum = curr_sum;
        }
        if (curr_sum > 0) {
            curr_sum = 0;
        }
    }
    return min_sum;
}