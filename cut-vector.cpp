int main() {
    vector<int> v;
    int n;
    while (cin >> n) {
        v.push_back(n);
    }
    
    int idx = 0;
    int diff = INT_MAX;
    for (int i = 1; i < v.size(); ++i) {
        int leftSum = accumulate(v.begin(), v.begin() + i, 0);
        int rightSum = accumulate(v.begin() + i, v.end(), 0);
        if (abs(leftSum - rightSum) < diff) {
            diff = abs(leftSum - rightSum);
            idx = i;
        }
    }
    
    for (int i = 0; i < idx; ++i) {
        cout << v[i] << endl;
    }
    cout << 0 << endl;
    
    for (int i = idx; i < v.size(); ++i) {
        cout << v[i] << endl;
    }
    cout << 0 << endl;
    
    return 0;
}