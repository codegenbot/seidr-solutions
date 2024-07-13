int main() {
    double h, f;
    int n;
    cin >> h >> f >> n;
    double bounciness = f / h;
    double total_distance = h + f;
    for (int i = 2; i <= n; ++i) {
        total_distance += 2 * f;
        f *= bounciness;
        total_distance += f;
    }
    cout << total_distance << endl;
    return 0;
}