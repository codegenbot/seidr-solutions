def modp(n: int, p: int):
    if p == 2:
        return n % p
    return pow(n, p - 2, p) * n % p