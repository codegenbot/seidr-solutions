Here is the solution:

long long minSubArraySum(vector<long long> nums){
    long long sum = 0, min_sum = INT64_MAX;
    for(long long i=0; i<nums.size(); i++){
        sum += nums[i];
        if(sum < min_sum)
            min_sum = sum;
        else if(sum > 0) // Reset sum when it becomes positive
            sum = 0;
    }
    return min_sum;
}