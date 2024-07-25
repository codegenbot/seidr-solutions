int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        arr[i] = (num / 3) - 2;
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    cout << sum;

    return 0;
}