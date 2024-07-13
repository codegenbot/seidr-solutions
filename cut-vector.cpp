int main() {
    int n;
    cin >> n;
    
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    
    int left_sum = 0, right_sum = 0;
    for (int i = 0; i < n; ++i) {
        right_sum += vec[i];
    }
    
    int ans_pos = 0;
    int min_diff = abs(left_sum - right_sum);
    for (int i = 0; i < n; ++i) {
        left_sum += vec[i];
        right_sum -= vec[i];
        
        int curr_diff = abs(left_sum - right_sum);
        
        if (curr_diff < min_diff) {
            ans_pos = i;
            min_diff = curr_diff;
        }
    }
    
    for (int i = 0; i <= ans_pos; ++i) {
        cout << vec[i] << endl;
    }
    for (int i = ans_pos + 1; i < n; ++i) {
        cout << vec[i] << endl;
    }
    
    return 0;
}