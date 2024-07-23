```Python
from typing import List


def get_factors(n: int) -> List[int]:
    factors = []
    i = 1
    while i * i <= n:
        if n % i:
            i += 1
        else:
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            for _ in range(count):
                factors.append(i)
    if n > 1:
        factors.append(n)
    return factors