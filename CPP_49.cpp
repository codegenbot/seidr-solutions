int modp(int n, int p) {
    if (p == 0) return 0;
    int result = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * p) % p;
        }
        n = n / 2;
        p = (p * p) % p;
    }
    return result;
}