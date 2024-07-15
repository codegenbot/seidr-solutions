int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
        if (sum < 0) {
            cout << i << endl;
            return 0;
        }
    }
    
    cout << 0 << endl;
    
    return 0;
}