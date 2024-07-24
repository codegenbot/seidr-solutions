def modp(n: int, p: int):
    return pow(n, p - 1, p) if n != 0 and gcd(n, p) == 1 else None