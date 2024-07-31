from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    total_product = 1

    for num in numbers:
        total_sum += num
        total_product *= num if num != 0 else 1

    return (total_sum, total_product)