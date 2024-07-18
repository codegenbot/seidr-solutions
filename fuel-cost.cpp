int main() {
    int n, num, sum = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        sum += (num / 3) - 2;
    }
    cout << sum << endl;
    return 0;
}