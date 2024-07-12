int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    int totalSum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
        totalSum += vec[i];
    }
    int halfSum = totalSum / 2;
    int sum = 0;
    int idx = -1;
    for (int i = 0; i < n; ++i) {
        sum += vec[i];
        if (sum >= halfSum) {
            idx = i;
            break;
        }
    }
    if (abs(2*sum - totalSum) < abs(2*(sum-vec[idx]) - totalSum)) {
        cout << idx + 1 << endl;
        for (int i = 0; i <= idx; ++i) {
            cout << vec[i] << endl;
        }
        cout << totalSum - sum << endl;
    } else {
        cout << idx + 2 << endl;
        for (int i = 0; i <= idx; ++i) {
            cout << vec[i] << endl;
        }
        cout << vec[idx + 1] << endl;
    }
    return 0;
}