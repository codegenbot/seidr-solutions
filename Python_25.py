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
            while n % (i**count) == 0:
                count += 1
            factors.extend([i] * count)
            n //= i**count
    if n > 1:
        factors.append(n)
    return factors