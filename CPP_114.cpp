long long minSubArraySum(vector<long long> nums) {
    long long res = LLONG_MAX, curr_sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        curr_sum += nums[i];
        if (curr_sum > 0) {
            res = min(res, curr_sum);
        } else {
            curr_sum = 0;
        }
    }
    return res;
}