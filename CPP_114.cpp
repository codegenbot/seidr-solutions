Here is the completed code:

long long minSubArraySum(vector<long long> nums){
    long long total = 0;
    long long minTotal = LLONG_MAX;
    
    for(int i = 0; i < nums.size(); i++){
        total += nums[i];
        
        if(total > minTotal)
            total -= nums[i];
        else
            minTotal = min(minTotal, total);
    }
    
    return minTotal;
}