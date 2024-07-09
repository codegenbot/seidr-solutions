def modp(n: int, p: int):
    if n < 1 or p <= 2:
        return None
    return pow(n, p - 1, p) % p