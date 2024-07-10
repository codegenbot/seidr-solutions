double diceGame(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        if(i > m){
            sum += (n - i + 1) / (double)n * (m - i + 1) / (double)m;
        }
    }
    return sum;
}