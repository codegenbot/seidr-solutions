from math import sqrt
import sys


def largest_prime_factor(n):
    i = 2
    max_prime = 0
    while n > 1:
        try:
            if n % i == 0:
                j = i
                while n % j == 0:
                    n //= j
                max_prime = j
        except ZeroDivisionError:
            print("The number is not valid. Please enter a positive integer.")
            return None
        i += 1
    return max_prime


def main():
    while True:
        try:
            n = int(input("Enter a number: "))
            if n < 0:
                raise ValueError
            print(largest_prime_factor(n))
            cont = input("Do you want to calculate again? (y/n): ")
            if cont.lower() != "y":
                break
        except ValueError:
            print("Invalid input. Please enter an integer value.")


if __name__ == "__main__":
    main()