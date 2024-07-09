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
            temp = i
            while n % temp == 0:
                factors.append(temp)
                n //= temp
            temp += 1
        else:
            i += 2
    if n > 1:
        factors.append(n)
    return factors