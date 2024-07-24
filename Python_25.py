```
from typing import List

def factorize(n: int) -> List[int]:
    if n <= 0:
        raise ValueError("Expected positive integer")
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            while n % i == 0:
                n //= i
                factors.append(i)
    if n > 1:
        factors.append(n)
    return factors

try:
    n = int(input("Enter a positive integer: "))
except ValueError:
    print("Invalid input. Please enter a valid integer.")
    exit()

factors = factorize(n)
print(factors)