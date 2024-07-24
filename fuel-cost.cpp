int main() {
    int n, num, sum = 0;
    cin >> n;
    while (n--) {
        cin >> num;
        sum += max(0, num / 3 - 2);
    }
    cout << sum << endl;
    return 0;
}