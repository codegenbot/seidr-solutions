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

while True:
    try:
        n = int(input("Enter a number: "))
        if n == 0:
            raise ValueError("Invalid input. Please enter a non-zero positive integer.")
        print(factorize(n))
        break
    except ValueError as e:
        print(e)