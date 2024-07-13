double diceGame(int n, int m) {
    double total = (n * m - min(n,m));
    return (double)(min(n,m)-1)/total;
}