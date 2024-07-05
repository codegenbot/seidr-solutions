from math import gcd
from functools import reduce


def modp(n: int, p: int):
    if n < p:
        return n
    result = pow(
        n, reduce(lambda x, y: x * y % p, [i for i in range(1, (p - 1) // 2 + 1)]), p
    )
    return n * result % p if gcd(result, p) == 1 else n % p