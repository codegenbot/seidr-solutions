Here is the completed code:

long long minSubArraySum(vector<long long> nums){
    long long sum = 0, min_sum = LONG_LONG_MAX;
    for(int i = 0; i < nums.size(); i++){
        for(int j = i; j < nums.size(); j++){
            sum = 0;
            for(int k = i; k <= j; k++){
                sum += nums[k];
            }
            min_sum = min(min_sum, sum);
        }
    }
    return min_sum;
}