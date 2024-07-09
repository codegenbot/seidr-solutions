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


n = input("Enter an integer: ")
if n.isdigit():
    n = int(n)
    result = factorize(n)
    print(result)
else:
    print("Invalid input. Please enter an integer.")