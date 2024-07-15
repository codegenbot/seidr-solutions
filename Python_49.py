def modp(n: int, p: int):
    return pow(n, p - 2, p) * n % p if (n, p) != (0, 0) else 0