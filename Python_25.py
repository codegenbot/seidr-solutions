from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    for i in range(2, n + 1):
        while n % i == 0:
            factors.append(i)
            n //= i
    return [i for i in set(factors)]