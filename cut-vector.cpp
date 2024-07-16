int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 1; i < n; ++i) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < i; ++j) {
            sum1 += arr[j];
        }
        for (int j = i; j < n; ++j) {
            sum2 += arr[j];
        }
        
        int diff = abs(sum1 - sum2);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i < cutIndex; ++i) {
        cout << arr[i] << endl;
    }
    
    cout << 0 << endl;
    
    for (int i = cutIndex; i < n; ++i) {
        cout << arr[i] << endl;
    }
    
    return 0;
}