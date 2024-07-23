def modp(n: int, p: int):
    return pow(phi(p), 1, p) * n % p