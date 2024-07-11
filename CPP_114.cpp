Here is the solution:

long long minSubArraySum(vector<long long> nums){
    long long min_sum = LONG_LONG_MAX;
    long long current_sum = 0;

    for(long long i = 0; i < nums.size(); i++){
        current_sum += nums[i];

        if(current_sum > min_sum)
            current_sum = 0;
        else
            min_sum = min(min_sum, current_sum);
    }

    return min_sum;
}