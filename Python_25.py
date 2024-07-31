from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    while n > 1:
        i = 2
        while i <= math.sqrt(n):
            if n % i:
                i += 1
            else:
                n //= i
                factors.append(i)
                break
        if n > 1:
            factors.append(n)
            break
    return factors