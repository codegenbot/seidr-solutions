int i;
int maxRight = nums[n-1];
leaders.push_back(maxRight);
for (i = n-2; i >= 0; i--) {
    if (nums[i] > maxRight) {
        maxRight = nums[i];
        leaders.push_back(maxRight);
    }
}