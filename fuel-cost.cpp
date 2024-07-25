int main() {
    int n, x, total = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        total += max(0, x / 3 - 2);
    }
    cout << total << endl;
    return 0;
}