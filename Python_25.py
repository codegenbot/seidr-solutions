from typing import List


def factorize(n: int) -> List[List[int]]:
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
            factors.append([i] * count)
    if n > 1:
        factors.append([n])
    return sorted(set(tuple(sorted(f)) for f in set(map(tuple, (factor_list for factor_list in factors)))))
```