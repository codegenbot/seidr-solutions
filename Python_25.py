```
from typing import List

def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while n > 1:
        count = 0
        while n % i == 0:
            n /= i
            count += 1
        if count > 0:
            factors.append(i * count)
        i += 1
    return factors