from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    for i in range(2, math.isqrt(n) + 1):
        while n % i == 0:
            factors.append(i)
            n //= i
    if n > 1:
        factors.append(n)
    return [
        factor**factor_count
        for factor, factor_count in zip(
            *[i.split(",") for i in (", ".join(map(str, factors))), "1"] * len(factors)
        )
    ]