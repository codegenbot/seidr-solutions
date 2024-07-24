from typing import List


def factorize(n: int) -> List[List[int]]:
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            factors.append([i] * count)
    if n > 1:
        factors.append([n])
    return [
        list(factors_list)
        for factors_list in set(
            tuple(sorted(factor)) for factor in set(map(tuple, factors))
        )
    ]