int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int sum = 0, idx = 0;
    while (idx < n && sum >= 0) {
        sum += nums[idx++];
    }
    cout << (idx - 1) << endl;
    return 0;
}