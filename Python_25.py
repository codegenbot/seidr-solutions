from typing import List
import math


def factorize():
    num = int(input("Enter a number: "))
    factors = []
    for i in range(2, math.isqrt(num) + 1):
        if num % i:
            continue
        count = 0
        while num % i == 0:
            num //= i
            count += 1
        if count > 0:
            factors.append(i * count)
    if num > 1:
        factors.append(num)
    return sorted(factors)


print(factorize())