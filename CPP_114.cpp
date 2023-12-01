long long minSubArraySum(vector<long long> nums){
    long long currentSum = 0;
    long long minSum = nums[0];
    
    for(int i=0; i<nums.size(); i++){
        currentSum += nums[i];
        minSum = min(minSum, currentSum);
        if(currentSum > 0){
            currentSum = 0;
        }
    }
    
    return minSum;
}