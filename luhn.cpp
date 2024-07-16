int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 1) {
            int doubled = nums[i] * 2;
            sum += (doubled > 9) ? (doubled - 9) : doubled;
        } else {
            sum += nums[i];
        }
    }
    cout << sum << endl;
    
    return 0;
}