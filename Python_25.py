```
from typing import List
import math


def factorize():
    num = int(input("Enter a positive integer: "))
    if num <= 0:
        print("Please enter a positive integer.")
    else:
        factors = []
        i = 2
        while i * i <= num:
            if num % i:
                i += 1
            else:
                count = 0
                while num % (i ** (count + 1)) == 0:
                    count += 1
                for _ in range(count):
                    factors.append(i)
                num //= i**count
        if num > 1:
            factors.extend([num] * 1)
        return factors

print(factorize())