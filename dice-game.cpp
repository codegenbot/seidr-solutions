```
double diceGame(int n, int m) {
    double result = 0.0;
    for (int i = 1; i <= m && i < n; i++) {
        result += (n - i) / (double)(n * m);
    }
    for (int i = m + 1; i <= n + m; i++) {
        result += 1.0 / (double)(n * m);
    }
    return result;
}

int main() { return diceGame(0, 0); }