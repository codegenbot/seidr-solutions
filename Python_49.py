def modp(n: int, p: int):
    if p == 1:
        return 0
    return pow(n, p - 1, p) * n % p