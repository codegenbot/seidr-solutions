int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    
    int min_diff = INT_MAX;
    int cut_index = -1;
    for (int i = 1; i < n; ++i) {
        int left_sum = accumulate(vec.begin(), vec.begin() + i, 0);
        int right_sum = accumulate(vec.begin() + i, vec.end(), 0);
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i < cut_index; ++i) {
        cout << vec[i] << endl;
    }
    cout << endl;
    for (int i = cut_index; i < n; ++i) {
        cout << vec[i] << endl;
    }
    
    return 0;
}