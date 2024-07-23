def modp(n: int, p: int):
    return pow(n, p - 2, p) * (n % p) if gcd(p-1, n) == 1 else 0