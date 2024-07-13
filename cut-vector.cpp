int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }

    int min_diff = INT_MAX;
    int cut_idx = 0;
    for (int i = 0; i < nums.size() - 1; ++i) {
        int diff = abs(accumulate(nums.begin(), nums.begin() + i + 1, 0) - accumulate(nums.begin() + i + 1, nums.end(), 0));
        if (diff < min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
        if (diff == 0) break;
    }

    for (int i = 0; i <= cut_idx; ++i) {
        cout << nums[i] << endl;
    }
    cout << endl;
    for (int i = cut_idx + 1; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }

    return 0;
}