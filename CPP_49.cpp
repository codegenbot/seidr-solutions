int modp(int n, int p) {
    if (n == 0) {
        return 1;
    } else if (p == 0) {
        return 0;
    } else {
        int result = 1;
        n = n % p;
        while (p > 0) {
            if (p & 1) {
                result = (result * n) % p;
            }
            p = p >> 1;
            n = (n * n) % p;
        }
        return result;
    }
}