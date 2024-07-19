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
    number = int(input("Enter a number to factorize: "))
    if number <= 1:
        raise ValueError("Number should be greater than 1")
    print(factorize(number))
except ValueError as e:
    print(f"Error: {e}")