from typing import List
import math


def main():
    while True:
        try:
            n = int(input("Enter a number: "))
            break
        except ValueError:
            print("Invalid input! Please enter an integer.")
    for num in range(2, n + 1):
        is_prime = True
        for divisor in range(2, math.isqrt(num) + 1):
            if num % divisor == 0:
                is_prime = False
                break
        if is_prime:
            print(num)


main()