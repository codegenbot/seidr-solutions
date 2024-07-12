int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int diff = INT_MAX;
    int idx = -1;
    
    for (int i = 0; i < n-1; i++) {
        int sum_left = 0;
        int sum_right = 0;
        for (int j = 0; j <= i; j++) {
            sum_left += arr[j];
        }
        for (int j = i+1; j < n; j++) {
            sum_right += arr[j];
        }
        if (abs(sum_left - sum_right) < diff) {
            diff = abs(sum_left - sum_right);
            idx = i;
        }
        if (diff == 0) break;
    }
    
    for (int i = 0; i <= idx; i++) {
        cout << arr[i] << endl;
    }
    cout << endl;
    for (int i = idx+1; i < n; i++) {
        cout << arr[i] << endl;
    }
    
    return 0;
}