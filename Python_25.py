```
from typing import List
import math

def main():
    while True:
        try:
            n = int(input("Enter a number: "))
            break
        except ValueError:
            print("Invalid input! Please enter an integer.")
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
            factors.append(i ** count)
    if n > 1:
        factors.append(n)
    return factors

print(main())