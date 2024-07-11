def modp(n: int, p: int):
    if n < 0:
        return pow(-1 * n, p - 2, p) % p
    else:
        return pow(n, p - 2, p) * n % p