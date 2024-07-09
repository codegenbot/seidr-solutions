from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    i = n
    while i > 1:
        count = 0
        while i % i == 0:
            i //= i
            count += 1
        if count > 0:
            factors.append(i**count)
        i = 2
    return [int(factor) for factor in set(factors)]