def modp(n: int, p: int):
    return pow(n, p - 1, p) ** 2 % p