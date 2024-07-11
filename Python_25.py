```
from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    while n > 1:
        for i in range(2, math.isqrt(n) + 1):
            if n % i == 0:
                count = 0
                while n % i == 0:
                    n //= i
                    count += 1
                factors.append(i * count)
                break
    return factors