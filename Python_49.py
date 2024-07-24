def modp(n: int, p: int):
    return ((pow(p, -1, n)) * n) % p