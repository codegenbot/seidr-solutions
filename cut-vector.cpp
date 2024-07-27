int minDiff = std::abs(std::accumulate(nums.begin(), nums.end(), 0) - nums[0]);
int cutSpot = 0; // Initialize cutSpot to 0

for (int i = 1; i < n; ++i) {
    int sum1 = std::accumulate(nums.begin(), nums.begin() + i, 0);
    int sum2 = std::accumulate(nums.begin() + i, nums.end(), 0);
    int diff = std::abs(sum1 - sum2);

    if (diff < minDiff) { // Update the condition to "< minDiff"
        minDiff = diff;
        cutSpot = i;
    }
}