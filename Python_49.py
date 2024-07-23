def modp(n: int, p: int):
    if p == 1:
        return 0
    return pow(n * n % p, (p - 1) // 2, p) * n % p