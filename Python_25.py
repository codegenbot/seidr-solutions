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

try:
    number = int(input("Enter a number to factorize: "))
    assert number > 1, "Number should be greater than 1"
    print(factorize(number))  
except (ValueError, AssertionError) as e:
    print("Invalid input. Please enter a valid integer greater than 1.")