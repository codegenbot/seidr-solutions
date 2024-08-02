Here is the completed code:

double probability(int n, int m) {
    double total = (double)n * m;
    return (n - 1) / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4);
    cout << probability(n, m) << endl;
    return 0;
}