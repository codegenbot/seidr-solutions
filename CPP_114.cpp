Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0, min_sum = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < min_sum)
            min_sum = sum;
        else if (sum > 0) {
            while (sum > 0 && i < nums.size() - 1) {
                sum -= nums[i++];
            }
        }
    }
    return min_sum;
}