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


# Read input from user
num = int(input("Enter a number to factorize: "))
if num > 1:
    result = factorize(num)

    # Print the factorized numbers
    print(result)
else:
    print("Input should be greater than 1.")