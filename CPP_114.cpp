Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    long long total = 0;
    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
        if (total > 0) break;
    }
    return total;
}