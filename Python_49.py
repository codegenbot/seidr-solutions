```
import math


def modp(n: int, p: int):
    if p == 0:
        return 1
    result = 1
    while p > 0:
        if p % 2 == 1:
            result = (result * n) % p
        n = (n * n) % p
        p = p // 2
    return result