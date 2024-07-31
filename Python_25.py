from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            factors.append(i for _ in range(count))
    if n > 1:
        factors.append(n)
    return [factor for factor_list in factors for factor in factor_list]