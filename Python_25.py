from typing import List
import math


def main():
    while True:
        try:
            n1 = int(input("Enter the first integer: "))
            if n1 < 1:
                print("Please enter a positive integer.")
                continue
            break
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

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

    while True:
        try:
            n2 = int(input("Enter another integer: "))
            break
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

    common_factors = []
    i = 2
    while i * i <= min(n1, n2):
        if n1 % i == 0 and n2 % i == 0:
            count = 0
            while n1 % i == 0 and n2 % i == 0:
                n1 //= i
                n2 //= i
                count += 1
            common_factors.extend([i] * count)
        elif n1 % i or n2 % i:
            i += 1
        else:
            break

    if n1 > 1 and not n2 % n1 == 0:
        common_factors.append(n1)
    if n2 > 1 and not n1 % n2 == 0:
        common_factors.append(n2)

    if common_factors:
        print(
            f"{', '.join(map(str, set(common_factors)))} are the common factors between {n1} and {n2}."
        )
    else:
        print(f"No common factor found between {n1} and {n2}.")

    n3 = int(input("Enter another integer: "))
    common_factors = []
    i = 2
    while i * i <= min(n1, n2, n3):
        if n1 % i == 0 and n2 % i == 0 and n3 % i == 0:
            count = 0
            while n1 % i == 0 and n2 % i == 0 and n3 % i == 0:
                n1 //= i
                n2 //= i
                n3 //= i
                count += 1
            common_factors.extend([i] * count)
        elif n1 % i or n2 % i or n3 % i:
            i += 1
        else:
            break

    if n1 > 1 and not (n2 % n1 == 0 or n3 % n1 == 0):
        common_factors.append(n1)
    if n2 > 1 and not (n1 % n2 == 0 or n3 % n2 == 0):
        common_factors.append(n2)
    if n3 > 1 and not (n1 % n3 == 0 or n2 % n3 == 0):
        common_factors.append(n3)

    if common_factors:
        print(
            f"{', '.join(map(str, set(common_factors)))} are the common factors between {n1}, {n2} and {n3}."
        )
    else:
        print(f"No common factor found between {n1}, {n2} and {n3}.")


if __name__ == "__main__":
    main()