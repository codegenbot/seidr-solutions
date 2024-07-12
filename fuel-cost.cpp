int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        sum += max(0, num / 3 - 2);
    }
    cout << sum << endl;
    return 0;
}