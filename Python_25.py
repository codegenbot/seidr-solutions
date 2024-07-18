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
    n = int(input("Enter a positive integer: "))
    if n > 0:
        print(factorize(n))
    else:
        print("Please enter a positive integer.")
except ValueError:
    print("Please enter a valid integer.")