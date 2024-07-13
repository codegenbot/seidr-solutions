int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    int diff = INT_MAX, index = -1;
    for (int i = 0; i < n - 1; ++i) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j <= i; ++j) {
            left_sum += vec[j];
        }
        for (int j = i + 1; j < n; ++j) {
            right_sum += vec[j];
        }
        int current_diff = abs(left_sum - right_sum);
        if (current_diff < diff) {
            diff = current_diff;
            index = i;
        }
    }
    for (int i = 0; i <= index; ++i) {
        cout << vec[i] << endl;
    }
    for (int i = index + 1; i < n; ++i) {
        cout << vec[i] << endl;
    }
    cout << diff;
    return 0;
}