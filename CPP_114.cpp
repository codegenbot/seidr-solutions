Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    if (nums.empty()) return 0; // handle empty vector
    long long res = INT_MAX;
    int start = 0, end = 0, sum = 0;
    while (end < nums.size()) {
        sum += nums[end];
        while (sum > 0 && start <= end) {
            res = min(res, sum);
            sum -= nums[start++];
        }
        end++;
    }
    return res;
}