Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    long long min_sum = INT_MAX;
    long long current_sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];
        min_sum = min(min_sum, current_sum);
    }

    return min_sum;
}