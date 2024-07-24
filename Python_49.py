def modp(n: int, p: int):
    if n < 0:
        n = p - abs(n)
    return pow(n, p - 2, p) * n % p