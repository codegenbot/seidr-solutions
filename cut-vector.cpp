int main() {
    vector<int> v;
    int x;
    while (cin >> x) {
        v.push_back(x);
    }
    int n = v.size();
    
    int min_diff = INT_MAX;
    int cut_point = 0;
    
    for (int i = 1; i < n; ++i) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < i; ++j) {
            sum1 += v[j];
        }
        for (int j = i; j < n; ++j) {
            sum2 += v[j];
        }
        
        int diff = abs(sum2 - sum1);
        if (diff < min_diff) {
            min_diff = diff;
            cut_point = i;
        }
    }
    
    for (int i = 0; i < cut_point; ++i) {
        cout << v[i] << endl;
    }
    cout << endl;
    for (int i = cut_point; i < n; ++i) {
        cout << v[i] << endl;
    }
    
    return 0;
}