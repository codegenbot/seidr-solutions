int cutIndex = 0;
int minDiff = abs(nums[0] - nums[1]);
for (int i = 1; i < n-1; ++i) {
    int diff = abs(nums[i] - nums[i+1]);
    if (diff < minDiff) {
        minDiff = diff;
        cutIndex = i;
    }
}
vector<int> subvector1(nums.begin(), nums.begin() + cutIndex + 1);
vector<int> subvector2(nums.begin() + cutIndex + 1, nums.end());