def modp(n: int, p: int):
    return pow(n, p, p) if p != 1 else n % p