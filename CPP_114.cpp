long long minSubArraySum(vector<long long> nums){
    long long minSum = nums[0];
    long long sum = 0;
    
    for(long long num : nums){
        sum += num;
        minSum = min(minSum, sum);
        minSum = min(minSum, num);
        if(sum > 0){
            sum = 0;
        }
    }
    
    return minSum;
}