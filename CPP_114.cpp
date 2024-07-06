long long minSubArraySum(vector<long long> nums){
    int n = nums.size();
    long long sum = 0;
    long long mini_sum = LLONG_MAX;

    for (int i = 0; i < n; ++i) {
        sum += nums[i];
        mini_sum = min(mini_sum, sum);
    }

    return mini_sum;
}