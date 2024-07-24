long long minSubArraySum(vector<long long> nums){
    long long min_sum = nums[0], cur_sum = nums[0];
    for(int i = 1; i < nums.size(); ++i){
        cur_sum = min(nums[i], cur_sum + nums[i]);
        min_sum = min(min_sum, cur_sum);
    }
    return min_sum;
}