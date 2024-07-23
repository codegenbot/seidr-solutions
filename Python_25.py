```
from typing import List
import math


def factorize(n: int) -> List[int]:
    if n <= 1:
        return []

    factors = []
    for i in range(2, math.isqrt(n) + 1):
        while n % i == 0:
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            if count > 0:
                if count > 1:
                    factors.extend([i] * count)
                else:
                    factors.append(i)

    # Check for remaining factors and prime numbers
    if n > 1:
        if n != math.isqrt(n) * math.isqrt(n):  
            factors.append(n)
        else:  
            factors.extend([math.isqrt(n)] * 2)

    return factors