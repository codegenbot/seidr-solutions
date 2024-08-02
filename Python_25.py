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

# Read input from the user
n = int(input("Enter a number to factorize: "))
# Call the factorize function
result = factorize(n)
# Print the factors
print(result)