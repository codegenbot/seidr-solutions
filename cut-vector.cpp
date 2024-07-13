int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }

    int minDiff = INT_MAX;
    int cutIndex = 0;

    for (int i = 1; i < nums.size(); i++) {
        int diff = abs(accumulate(nums.begin(), nums.begin() + i, 0) - accumulate(nums.begin() + i, nums.end(), 0));
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    for (int i = 0; i < cutIndex; i++) {
        cout << nums[i] << endl;
    }
    cout << 0 << endl;

    for (int i = cutIndex; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }
    cout << 0 << endl;

    return 0;
}