```
from typing import List
import math


def factorize(n: int) -> List[int]:
    if n <= 1:
        return []
    
    factors = []
    for i in range(2, math.isqrt(n) + 1):
        count = 0
        while n % i == 0:
            n //= i
            count += 1
        if count > 0:
            if count > 1:
                factors.extend([i] * count)
            else:
                factors.append(i)
        if n > 1 and is_prime(n):
            factors.append(n)
            break
    return factors


def is_prime(num: int) -> bool:
    if num <= 1:
        return False
    for i in range(2, math.isqrt(num) + 1):
        if num % i == 0:
            return False
    return True