Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    long long res = LLONG_MAX, cur_sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        cur_sum += nums[i];
        if (cur_sum < res)
            res = cur_sum;
        if (cur_sum > 0)
            cur_sum = 0;
    }
    return res;
}