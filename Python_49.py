def modp(n: int, p: int):
    if n == 0:
        return 1
    return pow(n, p - 2, p) * n % p