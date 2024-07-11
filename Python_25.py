```
from typing import List
import math


def factorize():
    try:
        n = int(input("Enter a number to factorize: "))
        if not isinstance(n, int):
            raise ValueError("Input must be an integer.")
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
                factors.append(i**count)
                i += 1
        if n > 1:
            factors.append(n)
        return factors
    except ValueError as e:
        print(f"Error: {e}")


if __name__ == "__main__":
    try:
        num = int(input("Enter a number to factorize: "))
        if num > 1:
            print(*factorize())
        else:
            print("Please enter a positive integer greater than 1.")
    except ValueError as e:
        print(f"Error: {e}")