from typing import List


def factorize(n: int) -> List[int]:
    factors = []
    div = 2

    while n > 1:
        if n % div == 0:
            factors.append(div)
            n = n // div
        else:
            div += 1

    return factors