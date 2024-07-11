int modp(int n, int p) {
    if (p == 0) return -1; // Error: Division by zero
    if (n == 0) return 1;

    int result = 1;
    n = n % p;
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * n) % p;
        }
        n = (n * n) % p;
    }

    return result;
}