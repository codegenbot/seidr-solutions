long long minSubArraySum(vector<long long> nums){
    long long total = 0, minTotal = LLONG_MAX;
    for(long long i : nums){
        total += i;
        minTotal = min(minTotal, total);
        if(total < 0) total = 0;
    }
    return minTotal;
}