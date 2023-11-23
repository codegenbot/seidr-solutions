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

# Read input from user
n = int(input())

# Call the factorize function with the input number
result = factorize(n)

# Print the result
print(result)