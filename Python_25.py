```
from typing import List
import math

def factorize(n: int) -> List[int]:
    factors = []
    for i in range(2, math.isqrt(n) + 1):
        while n % i == 0:
            n //= i
            factors.extend([i] * (n > 0))
    return factors