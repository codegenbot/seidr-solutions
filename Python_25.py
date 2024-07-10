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

    while True:
        try:
            n2 = int(input("Enter another integer: "))
            if n2 < 1:
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

    if any(i in factors1 for i in factors2):
        print(f"{n2} is a divisor of {factors1[0]}")
    else:
        print(f"{n2} is not a divisor of {factors1[0]}")


if __name__ == "__main__":
    main()