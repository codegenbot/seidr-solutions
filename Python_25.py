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
            while n % (i ** (count + 1)) == 0:
                count += 1
            for _ in range(count):
                factors.append(i)
            n //= (i ** count)
    if n > 1:
        factors.extend([n] * 1)
    return factors