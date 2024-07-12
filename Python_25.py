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
                count += 1
                n //= i
            factors.append(i for _ in range(count))
            i += 1
    if n > 1:
        factors.append(n)
    return list(map(int, [item for sublst in factors for item in sublst]))