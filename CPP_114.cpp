long long minSubArraySum(vector<long long> nums){
    long long minSum = nums[0];
    long long currSum = 0;
    
    for(int i = 0; i < nums.size(); i++){
        currSum = min(nums[i], currSum + nums[i]);
        minSum = min(minSum, currSum);
    }
    
    return minSum;
}