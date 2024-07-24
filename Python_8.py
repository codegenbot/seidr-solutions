```
from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not isinstance(numbers, list):
        raise ValueError("Input must be a list")
    for num in numbers:
        if not isinstance(num, int):
            raise ValueError("List elements must be integers")

    total_sum = 0
    product = 1
    for num in numbers:
        total_sum += num
        product *= num

    return total_sum, product


input_str = input("Enter a list of numbers separated by spaces: ")
numbers = [int(num) for num in input_str.split()]

try:
    result = sum_product(numbers)
    print(f"Sum: {result[0]}, Product: {result[1]}")
except ValueError as e:
    print(e)