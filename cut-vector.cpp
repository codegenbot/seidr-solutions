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
        int sum_left = accumulate(vec.begin(), vec.begin() + i, 0);
        int sum_right = accumulate(vec.begin() + i, vec.end(), 0);
        int diff = abs(sum_left - sum_right);
        if (diff < min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << vec[i];
        if (i == cut_idx) {
            cout << endl;
        } else {
            cout << " ";
        }
    }

    return 0;
}