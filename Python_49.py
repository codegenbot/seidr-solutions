def modp(n: int, p: int):
    if n < 0:
        n = pow(-1, (p - 2), p) * abs(n) % p
    return pow(n, p - 2, p) * n % p