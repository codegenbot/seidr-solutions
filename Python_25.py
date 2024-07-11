from typing import List

def factorize(n: int) -> List[int]:
    i = 2
    factors = []
    while i * i <= n:
        if n % i:
            i += 1
        else:
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            factors.append(i ** count)
            i += 1
    if n > 1:
        factors.append(n)
    return list(set([int(factor) for factor in factors]))