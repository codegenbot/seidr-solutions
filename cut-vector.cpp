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
        int diff = abs(accumulate(vec.begin(), vec.begin() + i, 0) - accumulate(vec.begin() + i, vec.end(), 0));
        if (diff < min_diff || (diff == min_diff && vec[i] > vec[cut_index])) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i < cut_index; ++i) {
        cout << vec[i] << endl;
    }
    
    cout << vec[cut_index] << endl;
    
    for (int i = cut_index + 1; i < n; ++i) {
        cout << vec[i] << endl;
    }
    
    return 0;
}