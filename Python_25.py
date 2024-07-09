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
    print("Please enter an integer:")
    n = int(input().strip())
    result = factorize(n)
    print(result)
except ValueError:
    print("Invalid input. Please enter an integer.")