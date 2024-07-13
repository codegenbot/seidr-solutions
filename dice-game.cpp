double diceGame(int n, int m) {
    double total = 0.0;
    for (int i = 1; i <= min(n-1, m); i++) { 
        total += static_cast<double>(min(n-i, m+1))/static_cast<double>(n*m);
    }
    return total;
}