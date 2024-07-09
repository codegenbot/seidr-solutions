I can help you with that! Here's the modified code:

```
from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while i * i <= n:
        if n % i == 0:
            j = i
            while n % j == 0:
                factors.append(j)
                n //= j
            j = i + 1
            while j * j <= n and j < int(math.sqrt(n)):
                if n % j == 0:
                    factors.extend([j] * (n // j - 1))
                    n //= j
                else:
                    j += 2
        else:
            i += 2
    if n > 1:
        factors.append(n)
    return factors