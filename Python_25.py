from typing import List

def factorize(n: int) -> List[int]:
    factors = []
    d = 2
    while d * d <= n:
        if n % d == 0:
            factors.append(d)
            n //= d
        else:
            d += 1
    if n > 1:
        factors.append(n)
    return factors

# Prompt user for input
n = int(input("Enter a number to factorize: "))

# Call the factorize function with user input
result = factorize(n)

# Print the factors
print("Factors:", result)