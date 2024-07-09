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

# Read input from user
n = int(input("Enter an integer number: "))
# Call factorize function
result = factorize(n)
# Print the factors
print(result)