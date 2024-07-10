double diceGame(int n, int m) {
    double sum = 0;
    for (int i = 1; i < min(n, m); i++) {
        sum += (n - i) * 1.0 / n * (m - i) * 1.0 / m;
    }
    return sum + ((min(n, m) == m)?(n-min(n, m)+1)*1.0/n:(n-min(n, m)+1)*1.0/n);
}