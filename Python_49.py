def modp(n: int, p: int):
    if n % p == 0:
        return n
    return pow(n, p - 2, p) * n % p