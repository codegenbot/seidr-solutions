int main() {
    int n, num, sum = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        sum += max(0, num / 3 - 2);
    }
    cout << sum;
    return 0;
}