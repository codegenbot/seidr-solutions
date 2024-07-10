Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0, min_sum = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum = 0;
        for (int j = i; j < nums.size(); j++) {
            sum += nums[j];
            if (sum > min_sum) break;
            min_sum = min(min_sum, sum);
        }
    }
    return min_sum;
}