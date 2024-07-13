int main() {
    int n, num;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        sum += max(0, num / 3 - 2);
    }
    cout << sum;
    return 0;
}