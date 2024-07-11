def modp(n: int, p: int):
    return pow(n, p) % p if n > 0 else 1