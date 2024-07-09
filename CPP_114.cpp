int findMinSum(int start, int end, vector<long long>& nums) {
    long long sum = 0;
    for (int i = start; i <= end; i++) {
        sum += nums[i];
    }
    return sum;
}

long long minSubArraySum(vector<long long> nums){
    long long min_sum = LLONG_MAX;
    for(int i=0;i<nums.size();i++){
        long long sum = 0;
        for(int j=i;j<nums.size();j++){
            sum += nums[j];
            min_sum = min(min_sum, sum);
        }
    }
    return min_sum;
}