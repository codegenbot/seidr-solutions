int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    int minDiff = INT_MAX;
    int cutIndex = -1;

    for (int i = 1; i < n; ++i) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < i; ++j) {
            sum1 += vec[j];
        }
        for (int j = i; j < n; ++j) {
            sum2 += vec[j];
        }
        int diff = abs(sum1 - sum2);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    for (int i = 0; i < cutIndex; ++i) {
        cout << vec[i] << endl;
    }
    cout << endl;
    for (int i = cutIndex; i < n; ++i) {
        cout << vec[i] << endl;
    }

    return 0;
}