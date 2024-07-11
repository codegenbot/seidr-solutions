from typing import List
import math


def factorize(num: int) -> List[int]:
    factors = []
    i = 2
    while i * i <= num:
        if num % i:
            i += 1
        else:
            count = 0
            while num % i == 0:
                num //= i
                count += 1
            factors.append(i ** count)
            i = 2  
    if num > 1:
        factors.append(num)
    return factors

print(factorize(int(input("Enter a number: "))))