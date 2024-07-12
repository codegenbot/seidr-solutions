Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0;
    long long res = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        res = min(res, sum);
        if (sum < 0) {
            sum = 0;
        }
    }
    return res;
}