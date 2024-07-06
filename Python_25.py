from typing import List
import math


def factorize():
    while True:
        try:
            n = int(input("Enter a number: "))
            if n < 2:
                print(
                    "Invalid input. Please enter an integer greater than or equal to 2."
                )
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
        print("The number is prime.")
    else:
        print(factors)

    again = input("Do you want to factorize another number? (yes/no): ")
    while again.lower() != "no":
        try:
            m = int(input("Enter a new number: "))
            if m < 2:
                print(
                    "Invalid input. Please enter an integer greater than or equal to 2."
                )
                continue
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")

        factorized_factors = []
        i = 2
        while i * i <= m:
            if m % i:
                i += 1
            else:
                count = 0
                while m % i == 0:
                    m //= i
                    count += 1
                factorized_factors.extend([i] * count)
        if m > 1:
            print("The number is prime.")
        else:
            print(factorized_factors)

        again = input("Do you want to factorize another number? (yes/no): ")


factorize()