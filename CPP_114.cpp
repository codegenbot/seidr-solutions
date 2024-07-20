long long minSubArraySum(vector<long long> nums){
    long long res = LLONG_MAX, curr_sum = 0;
    for(long long num : nums) {
        curr_sum = min(curr_sum + num, (long long)num);
        res = min(res, curr_sum);
    }
    return res;
}