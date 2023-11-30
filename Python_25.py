from typing import List

def factorize() -> List[int]:
    n = int(input())
    factors = []
    i = 2
    while i <= n:
        if n % i == 0:
            factors.append(i)
            n = n // i
        else:
            i += 1
    return factors