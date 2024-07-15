double diceGame(int n, int m) {
    double total = (double)n * m;
    
    // Cases where Colin rolls 1
    double count = m;

    // Other cases where Colin rolls higher than 1
    for(int i = 2; i <= m; i++) {
        count += ((n-m+1)/n);
    }

    return count / total;
}