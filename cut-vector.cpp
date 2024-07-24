int main() {
    int n;
    cin >> n;
    
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    
    int diff = INT_MAX;
    int pos = -1;
    
    for (int i = 1; i < n; ++i) {
        int left_sum = 0;
        int right_sum = 0;
        
        for (int j = 0; j < i; ++j) {
            left_sum += vec[j];
        }
        
        for (int j = i; j < n; ++j) {
            right_sum += vec[j];
        }
        
        if (abs(left_sum - right_sum) < diff) {
            diff = abs(left_sum - right_sum);
            pos = i;
        }
    }
    
    for (int i = 0; i < pos; ++i) {
        cout << vec[i] << endl;
    }
    
    for (int i = pos; i < n; ++i) {
        cout << vec[i] << endl;
    }
    
    cout << diff << endl;
    
    return 0;
}