```
from typing import List, Tuple


def sum_product():
    while True:
        try:
            numbers = [int(i) for i in input("Enter space-separated numbers: ").split()]
            return sum(numbers), *numbers
        except ValueError:
            print("Invalid input. Please enter integers separated by spaces.")