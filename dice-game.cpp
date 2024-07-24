Here is the solution:

double diceGame(int n, int m) {
    double total = (double)n * m;
    double petersWin = 0;

    for(int i = 1; i < m; i++) {
        petersWin += (double)(n - i + 1) / total;
    }

    return petersWin;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}