Here is the solution:

double getProbability(int n, int m) {
    double total = (double)n * m;
    return 1.0 - ((double)(n - m)) / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(5) << getProbability(n, m) << endl;
    return 0;
}