def modp(n: int, p: int):
    if n < 0:
        n = pow(-n, 1, p)
    return pow(n, p - 2, p) * n % p if p > 1 else n