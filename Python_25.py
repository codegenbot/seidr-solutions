from typing import List
import math


def factorize() -> List[int]:
    """Factorize a given number and returns its factors."""
    n = int(input("Enter a number: "))
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            factors.append(i**count)
            i = 2  # Reset i only when a factor is found
    if n > 1:
        factors.append(n)
    return factors


print(factorize())