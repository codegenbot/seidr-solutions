import math


def modp(n: int, p: int):
    if p == 2:
        return n % p
    elif p == 3:
        return n % p
    else:
        return n % p if p == 2 or p == 3 else math.fmod(math.pow(n, p - 1), p) * n