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


# Read input from the user
n = int(input())

# Call the factorize function with the input number
result = factorize(n)

# Print the list of factors
print(result)