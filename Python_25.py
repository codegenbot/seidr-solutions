```
from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    for i in range(2, math.isqrt(n) + 1):
        while n % i == 0:
            n //= i
            if i not in factors or factors.count(i) == 0:
                factors.append(i)
            else:
                factors[factors.index(i)] += 1
    if n > 1:
        factors.append(n)
    return factors