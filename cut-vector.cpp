int main() {
    vector<int> vec;
    int n;
    while (cin >> n) {
        vec.push_back(n);
    }
    
    int diff = INT_MAX;
    int idx = 0;
    for (int i = 0; i < vec.size() - 1; ++i) {
        int left_sum = accumulate(vec.begin(), vec.begin() + i + 1, 0);
        int right_sum = accumulate(vec.begin() + i + 1, vec.end(), 0);
        if (abs(left_sum - right_sum) < diff) {
            diff = abs(left_sum - right_sum);
            idx = i;
        }
    }
    
    for (int i = 0; i <= idx; ++i) {
        cout << vec[i] << endl;
    }
    cout << endl;
    for (int i = idx + 1; i < vec.size(); ++i) {
        cout << vec[i] << endl;
    }
    
    return 0;
}