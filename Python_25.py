```
from typing import List
import math

def factorize(n: int) -> List[int]:
    factors = []
    while n > 1:
        for i in range(2, math.isqrt(n) + 1):
            if n % i == 0:
                n //= i
                factors.append(i)
                break
        else:
            factors.append(n)
            break
    return factors