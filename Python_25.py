from typing import List

def factorize() -> List[int]:
    while True:
        try:
            n = int(input("Enter a number to factorize: "))
            break
        except ValueError:
            print("Please enter a valid integer")
    factors = []
    divisor = 2
    while n > 1:
        if n % divisor == 0:
            factors.append(divisor)
            n //= divisor
        else:
            divisor += 1
    return factors

print(factorize())