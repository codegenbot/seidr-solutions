int main() {
    int n, num;
    cin >> n;
    int total = 0;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        total += (num / 3) - 2;
    }
    cout << total << endl;
    return 0;
}