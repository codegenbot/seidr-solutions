int main() {
    int n, val, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> val;
        sum += (val / 3 - 2);
    }
    cout << sum;
    return 0;
}