Here is the solution to the problem:

```
from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    while n % 2 == 0:
        factors.append(2)
        n //= 2
    for i in range(3, int(math.sqrt(n)) + 1):
        if n % i == 0:
            factors.append(i)
            while n % i == 0:
                n //= i
    if n > 2:
        factors.append(n)
    return factors