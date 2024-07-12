int main() {
    int cutIndex = 0;
    int n = nums.size();
    vector<int> firstSubvector, secondSubvector;

    for (int i = 1; i < n; ++i) {
        int diff1 = abs(accumulate(nums.begin(), nums.begin() + i, 0) - accumulate(nums.begin() + i, nums.end(), 0));
        int diff2 = abs(accumulate(nums.begin(), nums.begin() + i + 1, 0) - accumulate(nums.begin() + i + 1, nums.end(), 0));
        if (diff1 <= diff2) {
            cutIndex = i;
            break;
        }
    }

    firstSubvector = vector<int>(nums.begin(), nums.begin() + cutIndex);
    secondSubvector = vector<int>(nums.begin() + cutIndex, nums.end());

    return 0;
}