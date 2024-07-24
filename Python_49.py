def modp(n: int, p: int):
    if n % p == 0:
        return n // p
    else:
        return pow(n, -1, p) * n % p