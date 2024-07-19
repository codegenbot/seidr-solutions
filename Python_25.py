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

while True:
    try:
        number = int(input("Enter a number to factorize: "))
        if number <= 1:
            raise ValueError("Number should be greater than 1")
        print(factorize(number))
        break
    except ValueError as e:
        if "Number should be greater than 1" in str(e):
            print("Invalid input. Please enter a valid integer greater than 1.")
        else:
            print("Invalid input. Please enter a valid integer.")