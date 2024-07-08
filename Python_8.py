from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(numbers)
    total_product = 1
    for num in numbers:
        total_product *= num
    if total_sum == 0 and total_product == 0:
        total_sum = 0
        total_product = 0
    return total_sum, total_product