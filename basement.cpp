int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int sum = 0;
    int idx = 0;
    
    for (int i = 0; i < n; i++) {
        sum += nums[i];
        if (sum < 0) {
            cout << idx << endl;
            return 0;
        }
        idx++;
    }
    
    cout << 0 << endl;
    
    return 0;
}