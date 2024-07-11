```
from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    for i in range(2, int(math.sqrt(n)) + 1):
        while n % i == 0:
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            if count > 0:
                factors.append(i * count)
    if n > 1:
        factors.append(n)
    return sorted(factors)