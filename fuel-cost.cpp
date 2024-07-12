int main() {
    int n, x;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        nums.push_back((x / 3) - 2);
    }
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    cout << sum << endl;
    return 0;
}