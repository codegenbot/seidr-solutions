from typing import List
import math


def solve() -> None:
    num = int(input("Enter a number: "))
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
    print("The factors of the number are:", factors)