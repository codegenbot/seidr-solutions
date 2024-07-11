long long ans = INT_MAX, sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum = min(nums[i], sum + nums[i]);
        ans = min(ans, sum);
    }
    return ans;
}