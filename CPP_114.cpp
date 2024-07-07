Here is the completed code:

long long minSubArraySum(vector<long long> nums){
    int n = nums.size();
    long long res = LONG_LONG_MAX;
    for(int i=0; i<n; ++i){
        long long sum = 0;
        for(int j=i; j<n; ++j){
            sum += nums[j];
            res = min(res, sum);
        }
    }
    return res;
}