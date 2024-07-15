int main() {
    int n, x;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        sum += max(x / 3 - 2, 0);
    }
    cout << sum;
    return 0;
}