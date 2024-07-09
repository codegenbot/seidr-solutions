Here is the completed code:

long long minSubArraySum(vector<long long> nums){
    long long total = 0, min_total = LLONG_MAX;
    for(int i = 0; i < nums.size(); i++){
        total += nums[i];
        if(total < min_total) min_total = total;
        if(total > 0) total = 0;
    }
    return min_total;
}