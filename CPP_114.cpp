Here is the solution:

long long minSubArraySum(vector<long long> nums){
    long long res = LLONG_MAX, curr_sum = 0;
    for(long long num : nums){
        curr_sum += num;
        if(curr_sum < res)
            res = curr_sum;
        if(curr_sum > 0)
            curr_sum = 0;
    }
    return res;
}