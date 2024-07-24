int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
        sum += (nums[i] / 3) - 2;
    }
    cout << sum << endl;
    return 0;
}