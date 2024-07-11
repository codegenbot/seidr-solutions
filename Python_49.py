def modp(n: int, p: int):
    if p == 1:
        return n % p
    return pow(n, p - 2, p) * n * pow(n, 1, p) % p