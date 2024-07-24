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

# Read input from standard input
n = int(sys.stdin.readline().rstrip())

# Call the function and print the output
print(factorize(n))