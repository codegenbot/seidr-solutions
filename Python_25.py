from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    while n > 1:
        i = 2
        while i * i <= n:
            if n % i:
                i += 1
            else:
                n //= i
                break
        if i > math.sqrt(n):
            factors.append(n)
            break
        factors.append(i)
    return factors