Here is the completed code:

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
            if len(factors) == 0 or i != factors[-1]:
                factors.append(i)
            else:
                factors[-1] *= i
            i = 2
    if n > 1:
        if len(factors) == 0 or n != factors[-1]:
            factors.append(n)
    return factors