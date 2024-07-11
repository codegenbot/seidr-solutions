def modp(n: int, p: int):
    return pow(n, p - 2, p) * n % p if (n < p and p > 2) else n % p