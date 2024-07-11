Here is the solution:

```python
from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    for i in range(2, math.isqrt(n) + 1):
        while n % i == 0:
            if i not in factors or n // i not in (factors[i] * 10 + x for x in range(10)):
                factors.append(i)
            n //= i
    if n > 1:
        factors.append(n)
    return [i ** f for _, f in [(n, factors.count(i)) for i in set(factors)]]