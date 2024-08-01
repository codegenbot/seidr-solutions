from typing import List
def factorize(n: int) -> List[int]:
    factors = []
    divisor = 2
    if n < 2:
        factors.append(n)
        return factors
    while n > 1:
        if n % divisor == 0:
            factors.append(divisor)
            n //= divisor
        else:
            divisor += 1
    return factors

factorize(56)