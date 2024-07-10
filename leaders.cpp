for (int i = n - 2; i >= 0; --i) {
    if (nums[i] >= max_right) {
        leaders.push_back(nums[i]);
        max_right = nums[i];
    }
}