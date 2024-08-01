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


# Read input
n = int(input("Enter a number: "))

# Get the factors of the number
factors = factorize(n)

# Print the factors
print(factors)