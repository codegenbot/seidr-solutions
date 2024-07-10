Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0, min_sum = INT_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < min_sum)
            min_sum = sum;
        if (sum > 0) {
            int j = i;
            while (j < nums.size() && sum >= 0) {
                sum -= nums[j++];
            }
        }
    }
    return min_sum;
}