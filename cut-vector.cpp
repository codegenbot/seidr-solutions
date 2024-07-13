int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    
    int diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 1; i < n; ++i) {
        int sum_left = 0, sum_right = 0;
        
        for (int j = 0; j < i; ++j) {
            sum_left += vec[j];
        }
        
        for (int j = i; j < n; ++j) {
            sum_right += vec[j];
        }
        
        int current_diff = abs(sum_left - sum_right);
        
        if (current_diff < diff || (current_diff == diff && sum_left == sum_right)) {
            diff = current_diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i < n; ++i) {
        if (i < cut_index) {
            cout << vec[i] << endl;
        } else {
            cout << 0 << endl;
        }
    }
    
    return 0;
}