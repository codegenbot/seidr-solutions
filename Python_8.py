from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(filter(None, numbers))
    product = 1
    for num in numbers:
        product *= num if num is not None else 1
    return (total_sum, product)