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


if __name__ == "__main__":
    numbers = [1, 2, 3, 4]
    result = sum_product(numbers)
    print(f"Sum: {result[0]}, Product: {result[1]}")