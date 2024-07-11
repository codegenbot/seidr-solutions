long long minSubArraySum(vector<long long> nums){
    long long result = nums[0], currentMin = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        currentMin = min(nums[i], currentMin + nums[i]);
        result = min(result, currentMin);
    }
    return result;
}