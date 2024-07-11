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
    n = int(input("Enter an integer value: ").strip())
    print(factorize(n))
except ValueError:
    print("Invalid input. Please enter an integer value.")