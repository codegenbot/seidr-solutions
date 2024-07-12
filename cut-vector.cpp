int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 1; i < n; ++i) {
        int diff = abs(accumulate(begin(v), begin(v) + i, 0) - accumulate(begin(v) + i, end(v), 0));
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i < cut_index; ++i) {
        cout << v[i] << endl;
    }
    
    cout << "0" << endl;
    
    for (int i = cut_index; i < n; ++i) {
        cout << v[i] << endl;
    }
    
    cout << "0" << endl;
    
    return 0;
}