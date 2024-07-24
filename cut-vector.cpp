int main() {
    int n;
    cin >> n;
    
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    
    int diff = INT_MAX;
    int idx = -1;
    
    for (int i = 0; i < n - 1; ++i) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j <= i; ++j) {
            sum1 += vec[j];
        }
        for (int j = i + 1; j < n; ++j) {
            sum2 += vec[j];
        }
        int currentDiff = abs(sum1 - sum2);
        if (currentDiff < diff) {
            diff = currentDiff;
            idx = i;
        }
    }
    
    for (int i = 0; i <= idx; ++i) {
        cout << vec[i] << endl;
    }
    for (int i = idx + 1; i < n; ++i) {
        cout << vec[i] << endl;
    }
    
    return 0;
}