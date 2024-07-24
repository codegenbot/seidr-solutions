for (int i = n-2; i >= 0; i--) {
    if (nums[i] > maxRight) {
        maxRight = nums[i];
        leaders.push_back(maxRight);
    }
}