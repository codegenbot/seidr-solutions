int modp(int n, int p) {
    if (n < 0) {
        n = ((1LL << 31) - n) % p;
    }
    long long result = 1, tempP = p;
    while (n > 0) {
        if (n & 1)
            result = (result * tempP) % p;
        n >>= 1;
        tempP = (tempP * tempP) % p;
    }
    return n == 0 ? 0 : int(result);
}