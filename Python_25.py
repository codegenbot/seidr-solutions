from typing import List
import math


def get_integer(prompt):
    while True:
        try:
            return int(input(prompt))
        except ValueError:
            print("Invalid input. Please enter a valid integer.")


def find_common_factors(n1, n2):
    factors1 = []
    i = 2
    while i * i <= n1:
        if n1 % i:
            i += 1
        else:
            n1 //= i
            count = 0
            while n1 % i == 0:
                n1 //= i
                count += 1
            factors1.extend([i] * count)
    if n1 > 1:
        factors1.append(n1)

    factors2 = []
    i = 2
    while i * i <= n2:
        if n2 % i:
            i += 1
        else:
            n2 //= i
            count = 0
            while n2 % i == 0:
                n2 //= i
                count += 1
            factors2.extend([i] * count)
    if n2 > 1:
        factors2.append(n2)

    return list(set(factors1) & set(factors2))


def main():
    n1 = get_integer("Enter the first integer: ")
    while n1 < 1:
        print("Please enter a positive integer.")
        n1 = get_integer("Enter the first integer: ")

    n2 = get_integer("Enter another integer: ")
    while not (n2 > 0 and n1 != n2):
        if n1 == n2:
            print(f"{n1} is the common factor between {n1} and {n2}.")
            return
        else:
            print("Please enter a positive integer.")
            n2 = get_integer("Enter another integer: ")

    common_factors = find_common_factors(n1, n2)
    if common_factors:
        print(
            f"{', '.join(map(str, common_factors))} are the common factors between {n1} and {n2}."
        )
    else:
        print(f"No common factor found between {n1} and {n2}.")


if __name__ == "__main__":
    main()