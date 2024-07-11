def modp(n: int, p: int):
    return pow(n, p - 1, p) * n % p if gcd(n, p) == 1 else -1