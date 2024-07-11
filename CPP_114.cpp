long long minSubArraySum(vector<long long> nums){
    long long sum = nums[0];
    long long minSum = nums[0];
    
    for(int i = 1; i < nums.size(); i++){
        sum = min(nums[i], sum + nums[i]);
        minSum = min(minSum, sum);
    }
    
    return minSum;
}