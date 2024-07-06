from typing import List
import math


def factorize():
    while True:
        try:
            n = int(input("Enter a number: "))
            if n < 2:
                print("Please enter a number greater than or equal to 2.")
                continue
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")

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