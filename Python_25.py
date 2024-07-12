from typing import List
import math

n = int(input("Enter a number: "))

def factorize(num: int) -> List[int]:
    factors = []
    i = 2
    while i * i <= num:
        if num % i:
            i += 1
        else:
            num //= i
            count = 0
            while num % i == 0:
                num //= i
                count += 1
            factors.extend([i] * count)
    if num > 1:
        factors.append(num)
    return factors