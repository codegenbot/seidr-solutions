```
from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not all(isinstance(num, int) for num in numbers):
        raise ValueError("Invalid input. Please enter a list of integers.")

    total_sum = 0
    product = 1

    for num in numbers:
        total_sum += num
        product *= num

    return total_sum, product if product != 0 else 1