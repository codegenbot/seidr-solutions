Here is the complete solution:

```
from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    while n % 2 == 0:
        factors.append(2)
        n //= 2
    i = 3
    while i * i <= n:
        if n % i == 0:
            for j in range(int(math.log(n, i))):
                factors.append(i)
            n //= i
        else:
            i += 2
    if n > 1:
        factors.append(n)
    return factors