import sys
from typing import List


def factorize(n: int) -> List[int]:
    if n <= 1:
        return []

    factors = []
    i = 2
    while i * i <= n:
        if n % i == 0:
            n //= i
            factors.append(i)
        else:
            i += 1
    if n > 1:
        factors.append(n)
    return factors


try:
    if len(sys.argv) != 2:
        raise ValueError("Input must be an integer")

    n = int(sys.argv[1])
    if n <= 0:
        raise ValueError("Input must be a positive integer")

    result = factorize(n)
    print(result)
except ValueError as e:
    print(str(e))