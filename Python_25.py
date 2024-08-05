from typing import List

def factorize(n: int) -> List[int]:
    factors = []
    divisor = 2
    n = int(input())
    while n > 1:
        if n % divisor == 0:
            factors.append(divisor)
            n //= divisor
        else:
            divisor += 1
    return factors