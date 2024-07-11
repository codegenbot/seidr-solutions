int main() {
    int n;
    cin >> n;
    
    vector<int> vec(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    
    int diff = INT_MAX;
    int split_idx = -1;
    
    for (int i = 1; i < n; ++i) {
        if (abs(accumulate(vec.begin(), vec.begin() + i, 0) - accumulate(vec.begin() + i, vec.end(), 0)) < diff) {
            diff = abs(accumulate(vec.begin(), vec.begin() + i, 0) - accumulate(vec.begin() + i, vec.end(), 0));
            split_idx = i;
        }
    }
    
    for (int i = 0; i < split_idx; ++i) {
        cout << vec[i] << endl;
    }
    
    cout << endl;
    
    for (int i = split_idx; i < n; ++i) {
        cout << vec[i] << endl;
    }
    
    return 0;
}