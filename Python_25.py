```
from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while i <= math.sqrt(n):
        if n % i:
            i += 1
        else:
            temp = i
            count = 0
            while n % temp == 0:
                n //= temp
                count += 1
            factors.extend([temp] * count)
    if n > 1:
        factors.append(n)
    return factors