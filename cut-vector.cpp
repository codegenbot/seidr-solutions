int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int min_diff = INT_MAX, cut_spot = 0;
    for (int i = 1; i < n; ++i) {
        int diff = abs(accumulate(nums.begin(), nums.begin() + i, 0) - accumulate(nums.begin() + i, nums.end(), 0));
        if (diff < min_diff) {
            min_diff = diff;
            cut_spot = i;
        }
    }

    cout << cut_spot << endl;
    for (int i = 0; i < cut_spot; ++i) {
        cout << nums[i] << endl;
    }
    cout << 0 << endl;

    for (int i = cut_spot; i < n; ++i) {
        cout << nums[i] << endl;
    }
    cout << 0 << endl;

    return 0;
}