from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not isinstance(numbers, list) or not all(isinstance(n, int) for n in numbers):
        raise ValueError("Invalid input. Please provide a list of integers.")

    total_sum = 0
    product = 1

    for num in numbers:
        total_sum += num
        product *= num

    return total_sum, product