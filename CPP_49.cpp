int modp(int n, int p) {
    if (p == 0) return 0;
    if (n == 0) return 1;
    
    int result = 1;
    n = n % p;
    
    while (p > 0) {
        if (p % 2 == 1) {
            result = (result * n) % p;
        }
        n = (n * n) % p;
        p = p / 2;
    }
    
    return result;
}