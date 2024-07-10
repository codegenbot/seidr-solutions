Here is the solution:

double getProbability(int n, int m) {
    if (n < m) {
        return 0;
    } else if (m == 1 || n == 1) {
        return 1;
    }
    
    double p = 1.0;
    for (int i = 2; i <= min(n - 1, m); i++) {
        p -= (double)i / max(n, m);
    }
    
    return p;
}