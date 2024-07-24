```
from typing import List, Tuple


def sum_product() -> Tuple[int, int]:
    while True:
        try:
            numbers = [int(i) for i in input("Enter space-separated numbers: ").split()]
            return sum(numbers), eval('*'.join(map(str, numbers)))
        except ValueError:
            print("Invalid input. Please enter integers separated by spaces.")