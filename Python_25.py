from typing import List
def factorize() -> List[int]:
    n = int(input())
    factors = []
    d = 2
    while d * d <= n:
        if (n % d) == 0:
            factors.append(d)
            n //= d
        else:
            d += 1
    if n > 1:
        factors.append(n)
    return factors
print(factorize())