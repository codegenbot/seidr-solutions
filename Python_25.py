from typing import List

def factorize(n: int) -> List[int]:
    if n <= 1:
        return [1]

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
num = int(input("Enter a number to factorize: "))
result = factorize(num)

# Print the factorized numbers
print(result)