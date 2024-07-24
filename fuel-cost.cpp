int main() {
    int n;
    vector<int> nums;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        nums.push_back((num / 3) - 2);
    }
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
    }
    cout << sum << endl;
    return 0;
}