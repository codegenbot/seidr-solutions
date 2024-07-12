import math


def modp(n: int, p: int):
    if math.gcd(p, n) == 1:
        return pow(n, p - 1, p) * n % p
    else:
        return n