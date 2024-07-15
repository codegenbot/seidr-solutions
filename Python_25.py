from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    for i in range(2, math.isqrt(n) + 1):
        while n % i == 0:
            if i not in factors or factors.count(i) < n // i:
                factors.append(i)
            n //= i
    if n > 1:
        factors.append(n)
    return factors