int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int sum = 0;
    for (int num : nums) {
        sum += max(num / 3 - 2, 0);
    }

    cout << sum;

    return 0;
}