long long minSubArraySum(vector<long long> nums) {
    long long res = LLONG_MAX;
    long long curr_sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        curr_sum += nums[i];
        if (curr_sum > res) {
            break;
        }
        res = min(res, curr_sum);
    }

    return res;
}