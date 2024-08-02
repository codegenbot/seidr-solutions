def modp(n: int, p: int):
    if p == 2:
        return 1
    return pow(n, p - 2, p) * n % p if p > 1 else 0