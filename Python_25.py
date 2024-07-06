from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while i * i <= n:
        count = 0
        while n % i == 0:
            n //= i
            count += 1
        if count > 0:
            factors.extend([i] * count)
        i += 1
    if n > 1:
        factors.append(n)
    return factors