def modp(n: int, p: int):
    if p == 0:
        return 0
    if n % p == 0:
        return 0

    return pow(n, p - 1, p) * n % p