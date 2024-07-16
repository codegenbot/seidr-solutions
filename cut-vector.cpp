int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    
    int min_diff = INT_MAX;
    int cut_idx = -1;
    
    for (int i = 1; i < n; ++i) {
        int diff = abs(accumulate(vec.begin(), vec.begin() + i, 0) - accumulate(vec.begin() + i, vec.end(), 0));
        if (diff < min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
    }
    
    for (int i = 0; i < cut_idx; ++i) {
        cout << vec[i] << endl;
    }
    cout << endl;
    for (int i = cut_idx; i < n; ++i) {
        cout << vec[i] << endl;
    }
    
    return 0;
}