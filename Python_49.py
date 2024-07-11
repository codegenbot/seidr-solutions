def modp(n: int, p: int):
    return ((n % p) ** ((-1) if n < 0 else 1)) % p