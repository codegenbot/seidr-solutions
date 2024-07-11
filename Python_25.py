```
from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    while n % 2 == 0:
        factors.append(2)
        n = n // 2
    for i in range(3, math.isqrt(n) + 1):
        if n % i == 0:
            count = 0
            while n % i == 0:
                count += 1
                n = n // i
            factors.extend([i] * count)
    if n > 1:
        factors.append(n)
    return factors