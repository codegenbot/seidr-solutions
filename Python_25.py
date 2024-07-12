```
from typing import List

def factorize(n: int) -> List[int]:
    i = 2
    factors = []
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            c = 0
            while n % i == 0:
                n //= i
                c += 1
            factors.extend([i] * c)
    if n > 1:
        factors.append(n)
    return factors