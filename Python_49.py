def modp(n: int, p: int):
    return pow(n, -1, p) * n % p