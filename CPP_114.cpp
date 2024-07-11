Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    int n = nums.size();
    long long res = LLONG_MAX;
    long long curr_sum = 0;

    for (int i = 0; i < n; i++) {
        curr_sum += nums[i];
        if (curr_sum > 0) {
            res = min(res, curr_sum);
            while (i + 1 < n && curr_sum >= nums[i + 1]) {
                curr_sum -= nums[i];
                i++;
            }
        } else {
            curr_sum = 0;
        }
    }

    return res;
}