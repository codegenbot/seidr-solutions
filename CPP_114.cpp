Here is the completed code:

long long minSubArraySum(vector<long long> nums){
    long long min_sum = LLONG_MAX;
    for(int start=0;start<nums.size();start++){
        long long sum = 0;
        for(int end=start;end<nums.size();end++){
            sum += nums[end];
            if(sum < min_sum) min_sum = sum;
        }
    }
    return min_sum;
}