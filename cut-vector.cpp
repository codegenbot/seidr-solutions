int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    
    int sum1 = 0, sum2 = 0;
    int diff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 0; i < n; ++i) {
        sum1 += vec[i];
    }
    
    for (int i = 0; i < n-1; ++i) {
        sum1 -= vec[i];
        sum2 += vec[i];
        int currentDiff = abs(sum1 - sum2);
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; ++i) {
        cout << vec[i] << endl;
    }
    cout << 0 << endl;
    
    for (int i = cutIndex + 1; i < n; ++i) {
        cout << vec[i] << endl;
    }
    cout << 0 << endl;
    
    return 0;
}