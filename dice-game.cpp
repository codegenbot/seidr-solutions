Here is the completed code:

double diceGame(int n, int m) {
    double sum = 0;
    for (int i = n + 1; i <= m * 2; i++) {
        sum += (i == m) ? 0 : 1.0 / max(n, m);
    }
    return 1 - sum;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(9) << diceGame(n, m) << endl;
    return 0;
}