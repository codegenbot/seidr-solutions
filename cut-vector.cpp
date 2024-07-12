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
        int leftSum = accumulate(arr.begin(), arr.begin() + i, 0);
        int rightSum = accumulate(arr.begin() + i, arr.end(), 0);
        int diff = abs(leftSum - rightSum);
        
        if (diff < minDiff || (diff == minDiff && i < cutIndex)) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i < cutIndex; ++i) {
        cout << arr[i] << "\n";
    }
    cout << "0\n";
    for (int i = cutIndex; i < n; ++i) {
        cout << arr[i] << "\n";
    }
    
    return 0;
}