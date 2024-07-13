double diceGame(int n, int m) {
    double total = 0;
    
    // Calculate probability where Peter rolls strictly higher than Colin
    for (int i = max(m, 1); i < min(n, m + 1); i++) {
        total += ((n - i) * (m)) / (n * m);
    }
    
    return total;
}