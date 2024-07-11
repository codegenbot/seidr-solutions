def modp(n: int, p: int):
    return pow((pow(n, p-2, p) * n) % p, p, p)