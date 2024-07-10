Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0;
    long long res = LLONG_MAX;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum > res) break;
        for (int j = i + 1; j <= nums.size(); ++j) {
            sum -= nums[j - 1];
            res = min(res, sum);
        }
    }
    return res;
}