from typing import List
import math


def factorize_number(n):
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


def factorize():
    again = "yes"
    while again.lower() != "no":
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

        factorize_number(n)

        again = input("Do you want to factorize another number? (yes/no): ")


factorize()