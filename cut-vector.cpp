int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }

    int n = nums.size();
    int idx = 0;
    int minDiff = INT_MAX;
    for (int i = 1; i < n; ++i) {
        int diff = abs(accumulate(nums.begin(), nums.begin() + i, 0) - accumulate(nums.begin() + i, nums.end(), 0));
        if (diff < minDiff) {
            minDiff = diff;
            idx = i;
        }
    }

    for (int i = 0; i < idx; ++i) {
        cout << nums[i] << endl;
    }
    cout << 0 << endl;
    for (int i = idx; i < n; ++i) {
        cout << nums[i] << endl;
    }
    cout << 0 << endl;

    return 0;
}