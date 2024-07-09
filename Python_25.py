from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    i = n
    while i > 1:
        count = 0
        while n % i == 0:
            n //= i
            count += 1
        if count > 0:
            factors.append(i**count)
        if n <= 1:
            break
        i -= 1
    return [int(factor) for factor in set(factors)]