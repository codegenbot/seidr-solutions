long long min_sum = nums[0], curr_sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        curr_sum = min(nums[i], curr_sum + nums[i]);
        min_sum = min(min_sum, curr_sum);
    }
    return min_sum;
}