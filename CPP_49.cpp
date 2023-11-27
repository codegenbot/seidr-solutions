int modp(int n, int p) {
    if (n == 0) {
        return 1;
    }
    int result = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * 2) % p;
        }
        n = n / 2;
    }
    return result;
}