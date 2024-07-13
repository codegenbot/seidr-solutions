double diceGame(int n, int m) {
    double total = (n * m - min(n,m));
    return (double)(min(m-1,n-m))/total;
}