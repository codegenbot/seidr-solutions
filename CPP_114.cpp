Here is the solution:

long long minSubArraySum(vector<long long> nums){
    long long sum = 0, min_sum = LONG_LONG_MAX;
    for(long long i : nums){
        sum += i;
        min_sum = min(min_sum, sum);
        if(sum < 0) sum = 0;
    }
    return min_sum;
}