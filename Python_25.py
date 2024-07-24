```
from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            temp = i
            count = 0
            while n % temp == 0:
                count += 1
                temp *= i
            factors.extend([i] * count)
            n //= temp
    if n > 1:
        factors.append(n)
    return factors