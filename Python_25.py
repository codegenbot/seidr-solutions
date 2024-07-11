from typing import List
import math

def factorize(n: int) -> List[int]:
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
            factors.append(i)
            factors.append(count)
    if n > 1:
        factors.append(n)
    return [factor for factor, count in (factors[i:i+2] for i in range(0, len(factors), 2)) for _ in range(int(factor)**(count-1) if count > 1 else 1)]