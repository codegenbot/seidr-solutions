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

# Call the function with the desired integer input to factorize
input_number = int(input("Enter an integer to factorize: "))
print(factorize(input_number))