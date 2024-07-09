```
from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while i * i <= n:
        if n % i == 0:
            while n % i == 0:
                factors.append(i)
                n //= i
        i += 1
    if n > 1:
        factors.append(n)
    return factors