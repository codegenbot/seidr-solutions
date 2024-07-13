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
            n = int(input("Enter a number (or 'q' to quit): "))
            if n == 42:
                print("The answer to life")
                break
            elif n == "q":
                print("Goodbye!")
                sys.exit(0)
            else:
                print(largest_prime_factor(n))
        except ValueError:
            print("Invalid input. Please enter an integer value.")


if __name__ == "__main__":
    main()