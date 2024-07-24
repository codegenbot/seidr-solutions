long long result = nums[0];
    long long sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum = min(nums[i], sum + nums[i]);
        result = min(result, sum);
    }
    return result;
}