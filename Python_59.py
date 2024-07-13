from math import sqrt
import sys


def largest_prime_factor(n):
    i = 2
    max_prime = 0
    while n > 1:
        if n % i == 0:
            j = i
            while n % j == 0:
                n //= j
            max_prime = j
        i += 1
    return max_prime


def main():
    while True:
        try:
            n = int(input("Enter a number: "))
            if n <= 1:
                print("Please enter a positive integer greater than 1.")
            else:
                print(largest_prime_factor(n))
            cont = input("Do you want to calculate again? (y/n): ")
            while True:
                if cont.lower() in ["y", "n"]:
                    break
                else:
                    print("Invalid input. Please enter 'y' or 'n'.")
                    cont = input("Please try again: ")
            if cont.lower() != "y":
                break
        except ValueError:
            print("Invalid input. Please enter an integer value.")
    print("Program ended.")


if __name__ == "__main__":
    main()