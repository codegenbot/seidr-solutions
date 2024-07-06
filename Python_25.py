from typing import List
import math


def factorize():
    n = int(input("Enter a number: "))
    if n is None:
        print("Program did not receive expected input")
        return
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            factors.extend([i] * count)
    if n > 1:
        factors.append(n)
    print(factors)


factorize()