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

    is_divisible = any(n2 % i == 0 for i in range(1, n1 + 1))
    if is_divisible:
        print(f"{n2} is divisible by {n1}")
    else:
        print(f"{n2} is not divisible by {n1}")


if __name__ == "__main__":
    main()