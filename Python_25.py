```
from typing import List
import math

def factorize(n: int) -> List[int]:
    factors = []
    i = n + 1
    while i > 1:
        if n % i:
            i -= 1
        else:
            count = 0
            while n % i == 0:
                count += 1
                n //= i
            factors.append(i ** count)
            i = n + 1
    if n > 1:
        factors.append(n)
    return factors