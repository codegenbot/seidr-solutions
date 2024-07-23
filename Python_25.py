```
from typing import List
import math

def factorize(n: int) -> List[int]:
    factors = []
    for i in range(2, n + 1):
        count = 0
        while n % i == 0:
            n //= i
            count += 1
        if count > 0:
            factors.append(i * count)
    return factors