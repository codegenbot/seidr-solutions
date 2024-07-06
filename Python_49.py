def modp(n: int, p: int):
    if p == 2:
        return n % 2
    return pow(n, p - 2, p) * n % p