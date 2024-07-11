import math


def modp(n: int, p: int):
    return pow(n, p - 1, p) * n % p if math.gcd(n, p) == 1 else None