long long minSubArraySum(vector<long long> nums){
    long long currMin = nums[0];
    long long globalMin = nums[0];
    
    for(int i = 1; i < nums.size(); ++i){
        currMin = min(nums[i], currMin + nums[i]);
        globalMin = min(globalMin, currMin);
    }

    return globalMin;
}