import sys
from typing import List

def factorize(n: int) -> List[int]:
    factors = []
    divisor = 2
    while n > 1:
        if n % divisor == 0:
            factors.append(divisor)
            n //= divisor
        else:
            divisor += 1
    return factors

try:
    n = int(sys.stdin.readline())
    result = factorize(n)
    print(result)
except ValueError:
    print("Invalid input. Please enter an integer.")