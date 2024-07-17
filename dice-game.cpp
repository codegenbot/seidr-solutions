Here is the solution:

double probability(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= m && i < n; ++i) {
        total += 1.0 / min(n, m);
    }
    return total / (n * m);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << probability(n, m) << endl;
    return 0;
}