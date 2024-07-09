Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    long long total = 0;
    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
    }
    long long min_sum = INT_MAX;
    for (int i = 0; i < nums.size(); i++) {
        total -= nums[i];
        min_sum = min(min_sum, total);
    }
    return min_sum;
}