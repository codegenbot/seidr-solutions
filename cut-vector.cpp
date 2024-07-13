int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int diff = INT_MAX;
    int idx = -1;
    for (int i = 1; i < n; i++) {
        int left_sum = accumulate(v.begin(), v.begin() + i, 0);
        int right_sum = accumulate(v.begin() + i, v.end(), 0);
        if (abs(left_sum - right_sum) < diff) {
            diff = abs(left_sum - right_sum);
            idx = i;
        }
    }

    for (int i = 0; i < idx; i++) {
        cout << v[i] << endl;
    }
    cout << 0 << endl;
    for (int i = idx; i < n; i++) {
        cout << v[i] << endl;
    }
    cout << 0 << endl;

    return 0;
}