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

n = int(input())
if n <= 1:
    print("Please enter a positive integer greater than 1")
else:
    print(factorize(n))