int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    int sum = 0;
    for (int num : vec) {
        sum += num;
    }
    int half_sum = 0;
    for (int i = 0; i < n; ++i) {
        half_sum += vec[i];
        if (half_sum * 2 >= sum) {
            if (half_sum * 2 == sum) {
                for (int j = 0; j <= i; ++j) {
                    cout << vec[j] << endl;
                }
            } else {
                if (abs(half_sum * 2 - sum) < abs((half_sum - vec[i]) * 2 - sum)) {
                    for (int j = 0; j <= i; ++j) {
                        cout << vec[j] << endl;
                    }
                } else {
                    for (int j = 0; j < i; ++j) {
                        cout << vec[j] << endl;
                    }
                    cout << vec[i] << endl;
                }
            }
            for (int j = i + 1; j < n; ++j) {
                cout << vec[j] << endl;
            }
            return 0;
        }
    }
    return 0;
}