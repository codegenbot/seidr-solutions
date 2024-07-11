from typing import List
import math


def print_fibonacci() -> None:
    n = int(input("Enter the number of terms in the Fibonacci sequence: "))
    a, b = 0, 1
    for _ in range(n):
        print(a)
        a, b = b, a + b