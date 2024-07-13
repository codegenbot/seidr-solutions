def modp(n: int, p: int):
    return pow(n, p - 1, p) % p if math.gcd(n, p) == 1 else None