int main() {
    int n, x;
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        sum += (x / 3) - 2;
    }
    cout << sum << endl;
    return 0;
}