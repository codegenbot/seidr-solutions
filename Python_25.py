from typing import List

def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while i <= n:
        if n % i == 0:
            factors.append(i)
            n = n // i
        else:
            i += 1
    return factors

# Read the input from the user
n = int(input())

# Call the function with the input
result = factorize(n)

# Print the result
print(result)