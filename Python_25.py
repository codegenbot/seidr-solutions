```
from typing import List

def is_prime(num: int) -> bool:
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while n > 1:
        if is_prime(i):
            count = 0
            while n % i == 0:
                count += 1
                n //= i
            factors.extend([i] * count)
        i += 1
    return factors