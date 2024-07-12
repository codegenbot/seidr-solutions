int main() {
    vector<int> v;
    int n;
    while (cin >> n) {
        v.push_back(n);
    }
    
    int sum = accumulate(v.begin(), v.end(), 0);
    int half_sum = sum / 2;
    
    int current_sum = 0;
    int idx = 0;
    for (int i = 0; i < v.size(); ++i) {
        current_sum += v[i];
        if (current_sum >= half_sum) {
            idx = i;
            break;
        }
    }
    
    if (abs(sum - 2 * current_sum) < abs(sum - 2 * (current_sum - v[idx]))) {
        for (int i = 0; i <= idx; ++i) {
            cout << v[i] << endl;
        }
        cout << 0 << endl;
    } else {
        for (int i = 0; i <= idx - 1; ++i) {
            cout << v[i] << endl;
        }
        cout << v[idx] << endl;
    }
    
    return 0;
}