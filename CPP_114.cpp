long long minSubArraySum(vector<long long> nums);

long long minSubArraySum(vector<long long> nums){
    long long curr_sum = 0, min_sum = INT_MAX;
    for(long long num : nums){
        curr_sum += num;
        if(curr_sum < min_sum) min_sum = curr_sum;
        if(curr_sum > 0) curr_sum = 0;
    }
    return min_sum;
}