```cpp
double diceGame(int n, int m) {
    double total = (n * m);
    double petersWin = 0.0;

    for (int i = 1; i <= min(n - 1, m); i++) {
        petersWin += ((n - i) * m) / total;
    }

    return 1.0 - petersWin;
}