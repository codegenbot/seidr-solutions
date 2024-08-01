for (int i = n-2; i >= 0; i--) {
    if (nums[i] >= maxRight && (leaders.empty() || nums[i] >= leaders.back())) {
        leaders.push_back(nums[i]);
        maxRight = nums[i]; // Update maxRight
    }
}