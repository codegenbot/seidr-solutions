```
from typing import List
import math


def factorize() -> List[int]:
    num = None
    while True:
        try:
            num = int(input("Enter a number: "))
            break
        except ValueError:
            print("That's not a valid integer! Try again.")

    factors = []
    for i in range(2, math.isqrt(num) + 1):
        if num % i == 0:
            count = 0
            while num % i == 0:
                num //= i
                count += 1
            factors.extend([i] * count)
    if num > 1:
        factors.append(num)
    return factors