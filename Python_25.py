from typing import List
import math


def factorize(number: int) -> List[int]:
    factors = []
    i = 2
    while i * i <= number:
        if number % i:
            i += 1
        else:
            count = 0
            while number % i == 0:
                number //= i
                count += 1
            factors.append(i ** count)
            i = 2  
    if number > 1:
        factors.append(number)
    return factors

print(factorize(int(input("Enter a number: "))))