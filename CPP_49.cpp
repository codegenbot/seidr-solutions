if (p == 1)
        return 0;
    int result = 1;
    n = n % p;
    if (n == 0)
        return 0;
    while (p > 0) {
        if (p % 2 == 1)
            result = (result * n) % p;
        p = p >> 1;
        n = (n * n) % p;
    }
    return result;
}