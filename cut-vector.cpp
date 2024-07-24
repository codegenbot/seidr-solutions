int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    int diff = INT_MAX, cutIndex = 0;
    for (int i = 1; i < n; ++i) {
        int leftSum = accumulate(vec.begin(), vec.begin() + i, 0);
        int rightSum = accumulate(vec.begin() + i, vec.end(), 0);
        if (abs(leftSum - rightSum) < diff) {
            diff = abs(leftSum - rightSum);
            cutIndex = i;
        }
    }
    for (int i = 0; i < cutIndex; ++i) {
        cout << vec[i] << endl;
    }
    cout << 0 << endl;
    for (int i = cutIndex; i < n; ++i) {
        cout << vec[i] << endl;
    }
    return 0;
}