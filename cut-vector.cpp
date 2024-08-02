int minDiff = INT_MAX;
int cutIndex = 0;
for (int i = 1; i < n; ++i) {
    int diff = abs(accumulate(nums.begin(), nums.begin() + i, 0) - accumulate(nums.begin() + i, nums.end(), 0));
    if (diff < minDiff) {
        minDiff = diff;
        cutIndex = i;
    }
}

vector<int> subvector1(nums.begin(), nums.begin() + cutIndex);
vector<int> subvector2(nums.begin() + cutIndex, nums.end());