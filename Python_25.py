from typing import List
import math


def factorize():
    try:
        num = int(input("Enter a number to factorize: "))
        if not isinstance(num, int):
            raise ValueError("Input must be an integer.")
        if num <= 1:
            print("Please enter a positive integer greater than 1.")
            return []
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
    except ValueError as e:
        print(f"Error: {e}")


def main():
    try:
        result = factorize()
        if result:
            print("Prime factors are:", *result, sep=", ")
    except Exception as e:
        print(f"An error occurred: {e}")


if __name__ == "__main__":
    main()