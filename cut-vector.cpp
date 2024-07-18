int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 1; i < n; ++i) {
        int sumLeft = 0, sumRight = 0;
        for (int j = 0; j < i; ++j) {
            sumLeft += nums[j];
        }
        for (int j = i; j < n; ++j) {
            sumRight += nums[j];
        }
        
        int diff = abs(sumLeft - sumRight);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i < cutIndex; ++i) {
        cout << nums[i] << endl;
    }
    cout << endl;
    for (int i = cutIndex; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}