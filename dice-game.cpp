Here is the solution:

double probability(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= m; i++) {
        total += pow(m, i-1) / pow(m + n - 1, i);
    }
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(4) << fixed << probability(n, m) << endl;
    return 0;
}