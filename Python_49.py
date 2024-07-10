def modp(n: int, p: int):
    if n < 0:
        return pow(-1, -1, p) * n % p
    else:
        return pow(n, -1, p)