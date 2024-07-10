int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int total = 0;
    for (int i = 0; i < n; ++i) {
        total += (nums[i] / 3) - 2;
    }
    
    cout << total;
    
    return 0;
}