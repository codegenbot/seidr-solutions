double diceGame(int n, int m) {
    double total = (double)n * m;
    double p1 = 0.0; // probability of peter rolling higher
    double p2 = 0.0; // probability of colin rolling higher
    
    for(int i = 1; i <= std::min(n, m); i++) {
        p1 += (n - i) / total;
        p2 += (m - i) / total;
    }
    
    return 1 - (p1 + p2);
}