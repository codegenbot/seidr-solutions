```
from typing import List
import math


def factorize() -> List[int]:
    num = int(input("Enter a number: "))
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
            i = 2  # Reset i only when a factor is found
    if num > 1:
        factors.append(num)
    return factors