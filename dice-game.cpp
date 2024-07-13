Here is the solution:

double getProbability(int n, int m) {
    if (n <= m)
        return 1.0 - (double)m / (n * 1.0);
    else
        return (double)m / (n * 1.0);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(17) << getProbability(n, m) << endl;
    return 0;
}