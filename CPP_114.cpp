Here is the completed code:

long long minSubArraySum(vector<long long> nums){
    long long n = nums.size();
    if(n == 0) return 0;
    long long res = INT_MAX;
    long long cur_sum = 0;
    for(long long i = 0; i < n; i++){
        cur_sum += nums[i];
        res = min(res,cur_sum);
        if(cur_sum > 0) cur_sum = 0;
    }
    return res;
}