```
from typing import List
import math

def factorize(n: int) -> List[int]:
    factors = []
    for i in range(2, math.isqrt(n) + 1):
        while n % i == 0:
            n //= i
        if n > 1:
            return [i] + factorize(n)
    if n > 1:
        return [n]
    return factors