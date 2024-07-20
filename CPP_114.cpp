Here is the completed code:

long long minSubArraySum(vector<long long> nums){
    long long res = LLONG_MAX, curr_sum = 0;
    for(long long num : nums) {
        curr_sum = (curr_sum + num < 0) ? 0 : curr_sum + num;
        res = min(res, curr_sum);
    }
    return res;
}