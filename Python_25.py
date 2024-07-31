from typing import List


def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            cnt = 0
            while n % (i * i) == 0:
                n //= i * i
                cnt += 1
            factors.extend([i] * cnt)
    if n > 1:
        factors.append(n)
    return factors