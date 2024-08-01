from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    for i in range(2, math.isqrt(n) + 1):
        while n % i == 0:
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            factors.append(i**count)
    if n > 1:
        factors.append(n)
    return factors


print(factorize(315))  # Expected output: [3, 3, 5, 7]