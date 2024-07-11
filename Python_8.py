from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    for number in numbers:
        total_sum += number
        product *= number
    return (total_sum, product)