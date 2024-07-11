def modp(n: int, p: int):
    return pow(n, 1, p) if n < p else pow(n % p, 1, p)