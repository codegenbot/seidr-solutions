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
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            factors.append(i) if i not in factors else None
            factors.extend([i]*count)
    if n > 1:
        factors.extend([n])
    return factors