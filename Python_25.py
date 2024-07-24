from typing import List

def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            count = 0
            temp_n = i
            while n % i == 0:
                n //= i
                count += 1
            factors.append([temp_n] * count)
    if n > 1:
        factors.append([n])
    return [factor for factor in set(tuple(factor) for factor in factors)]