from typing import List
def factorize(n: int) -> List[int]:
    factors = []
    if n < 2:
        return factors
    divisor = 2
    while n > 1:
        if n % divisor == 0:
            factors.append(divisor)
            n //= divisor
        else:
            divisor += 1
    return factors

# Call the function with the desired integer input to factorize
print(factorize(100))