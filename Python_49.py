def modp(n: int, p: int):
    return pow(n, 1, p) if n < p else modp(n % p, p)