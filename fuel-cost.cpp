int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    int new_sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
        new_sum += (nums[i] / 3) - 2;
    }
    cout << new_sum;
    return 0;
}