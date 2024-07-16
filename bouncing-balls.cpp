int main() {
    double h0, h1;
    int n;
    cin >> h0 >> h1 >> n;

    double bounciness = h1 / h0;
    double totalDistance = h0 + h1;

    for (int i = 2; i <= n; ++i) {
        totalDistance += 2 * h1;
        h1 *= bounciness;
        totalDistance += h1;
    }

    cout << totalDistance << endl;

    return 0;
}