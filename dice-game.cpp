Here is the solution:

double getProbability(int n, int m) {
    double p = 0;
    for (int i = 1; i <= n; i++) {
        p += (n - i + 1.0) / n * (m - (i % m)) / m;
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << getProbability(n, m) << endl;
    return 0;
}