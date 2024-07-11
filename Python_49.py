def modp(n: int, p: int):
    return pow(n, 1, p) if n > 0 else 1 % p if p != 1 else 0