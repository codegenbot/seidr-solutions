def modp(n: int, p: int):
    if n < 0:
        return 0
    return pow(n, p - 2, p) * n % p if n > 0 else 1