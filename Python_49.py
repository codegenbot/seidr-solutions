def modp(n: int, p: int):
    return pow(n, 1) % p if p == 2 else pow(n, p - 1, p) % p