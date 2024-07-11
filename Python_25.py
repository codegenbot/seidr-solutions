from typing import List
import math


def factorize(n: int) -> List[int]:
    factors = []
    while n > 1:
        i = 2
        while i * i <= n:
            if n % i:
                i += 1
            else:
                n //= i
                break
        if i > math.sqrt(n):
            i = n
            n //= i
        factors.append(i)
    return [i for i in set(factors)]