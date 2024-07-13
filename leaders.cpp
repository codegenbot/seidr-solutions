for (int i = nums.size() - 2; i >= 0; i--) {
    if (nums[i] >= maxLeader) {
        maxLeader = nums[i];
        leaders.insert(leaders.begin(), nums[i]);
    }
}