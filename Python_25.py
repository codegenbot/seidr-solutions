from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    for i in range(2, math.isqrt(n) + 1):
        while n % i == 0:
            n //= i
            if i not in factors:
                factors.append(i)
    if n > 1:
        factors.append(n)
    return [i for i in set(factors) for _ in range(factors.count(i))]