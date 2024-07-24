int main() {
    double h1, h2;
    int n;
    cin >> h1 >> h2 >> n;
    double bounciness = h2 / h1;
    double total_distance = h1 + h2;
    for (int i = 2; i <= n; ++i) {
        total_distance += 2 * h2;
        h2 *= bounciness;
        total_distance += h2;
    }
    cout << total_distance << endl;
    return 0;
}