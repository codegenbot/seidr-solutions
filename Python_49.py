def modp(n: int, p: int):
    return pow(n, p-2, p) * n % p if p > 2 else 1 if n == 0 or p in [2,3] else n