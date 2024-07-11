from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    try:
        while i * i <= n:
            if n % i:
                i += 1
            else:
                n //= i
                count = 0
                while n % i == 0:
                    n //= i
                    count += 1
                factors.extend([i] * count)
        if n > 1:
            factors.append(n)
    except ZeroDivisionError:
        return "Input must be a positive integer"
    return [int(factor) for factor in set(map(str, factors))]