double diceGame(int n, int m) {
    double total = n * m;
    double petersWin = 0.0;

    for (int i = 1; i <= m; i++) { 
        for (int j = 1; j < i; j++) {
            petersWin += (n - j + 1) / (double)(n * m);
        }
    }

    return petersWin;
}