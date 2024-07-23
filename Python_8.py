from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not isinstance(numbers, list):
        return "Invalid input. Please provide a list of integers."
    for num in numbers:
        if not isinstance(num, int):
            return "Invalid input. Please provide a list of integers."
    total_sum = 0
    product = 1
    for num in numbers:
        total_sum += num
        product *= num
    return total_sum, product