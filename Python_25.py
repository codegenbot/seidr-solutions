from typing import List
import math


def main():
    while True:
        try:
            n = int(input("Enter a number: "))
            break
        except ValueError:
            print("Invalid input! Please enter an integer.")
    return sum(
        1 for _ in (range(2, int(math.sqrt(n)) + 1) if n % i else [i + 1] or [n])
    )