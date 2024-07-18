int main() {
    int n, sum = 0;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
        sum += (nums[i] / 3) - 2;
    }
    cout << sum;
    return 0;
}