def modp(n: int, p: int):
    return pow(n, p - 2, p) * n % p if n < p else pow(n, p - 1, p)