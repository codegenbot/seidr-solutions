```
from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    for i in range(2, math.isqrt(n) + 1):
        while n % i == 0:
            n //= i
        if n > 1 and i != math.isqrt(n):
            break
        factors.extend([i] * (n // i))
        n //= i
    if n > 1:
        factors.append(n)
    return factors