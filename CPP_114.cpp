long long minSubArraySum(vector<long long> nums){
    if(nums.empty()) return 0;
    long long min_sum = INT64_MAX, current_sum = 0;
    for(int i=0; i<nums.size(); ++i){
        current_sum += nums[i];
        if(current_sum < min_sum) min_sum = current_sum;
        if(current_sum > 0) current_sum = 0;
    }
    return min_sum;
}