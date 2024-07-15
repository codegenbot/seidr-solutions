from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    while n % 2 == 0:
        factors.append(2)
        n //= 2
    i = 3
    while i <= math.isqrt(n):
        if n % i == 0:
            while n % i == 0:
                factors.append(i)
                n //= i
        i += 2
    if n > 1:
        factors.append(n)
    return [i**f for i, f in ((f, factors.count(f)) for f in set(factors))]