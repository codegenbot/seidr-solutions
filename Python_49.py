def modp(n: int, p: int):
    if n == 1:
        return 1
    if n % p == 0:
        return 0
    return pow(n, p - 2, p) * n % p