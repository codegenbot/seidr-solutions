from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            count = 0
            while n % (i * i) == 0:
                count += 1
                n //= i * i
            for _ in range(count):
                factors.append(i)
            i += 1
    if n > 1:
        factors.extend([n] * 2)
    return sorted(factors)