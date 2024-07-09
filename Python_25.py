```
from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    i = n
    while i >= 2:
        count = 0
        while i % i == 0:
            i //= i
            count += 1
        if count > 0:
            factors.append(i) * count
        i = 2
    if n > 1:
        factors.append(n)
    return [int(factor) for factor in set(factors)]