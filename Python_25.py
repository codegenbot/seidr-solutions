from typing import List


def factorize(n: int) -> List[int]:
    factor = []
    divisor = 2
    while n > 1:
        if n % divisor == 0:
            factor.append(divisor)
            n //= divisor
        else:
            divisor += 1
    return factor