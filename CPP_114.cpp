long long minSubArraySum(vector<long long> nums){
    long long res = LLONG_MAX;
    long long sum = 0;
    
    for(long long i=0; i<nums.size();i++){
        sum += nums[i];
        
        if(sum < res)
            res = sum;
        
        if(sum > 0)
            sum = 0;
    }
    
    return res;
}