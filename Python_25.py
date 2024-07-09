from typing import List

def factorize() -> List[int]:
    n = int(input("Enter a number to factorize: "))
    factors = []
    divisor = 2
    while n > 1:
        if n % divisor == 0:
            factors.append(divisor)
            n //= divisor
        else:
            divisor += 1
    return factors

# Call the function to factorize the input number
result = factorize()
print(result)