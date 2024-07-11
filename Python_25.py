from typing import List
import math


def factorize():
    num = int(input("Enter a number to factorize: "))
    if not isinstance(num, int) or num <= 1:
        return "Please enter a positive integer greater than 1."

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
            factors.append(i**count)
            i += 1
    if num > 1:
        factors.append(num)
    return factors


if __name__ == "__main__":
    print(factorize())