from typing import List

# Read input from user
n = int(input("Enter a number: "))

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

# Call the function with the input value
result = factorize(n)
print(result)