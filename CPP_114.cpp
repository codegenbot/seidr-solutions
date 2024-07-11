Here is the solution:

long long minSubArraySum(vector<long long> nums){
    long long sum = 0;
    long long min_sum = INT_MAX;
    for(long long i = 0; i < nums.size(); i++){
        sum = 0;
        for(long long j = i; j < nums.size(); j++){
            sum += nums[j];
            if(sum < min_sum) min_sum = sum;
        }
    }
    return min_sum;
}