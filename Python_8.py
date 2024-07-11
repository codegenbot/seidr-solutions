```
from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not isinstance(numbers, list):
        raise TypeError("Input should be a list of integers")

    total_sum = sum(numbers)
    product = 1
    for num in numbers:
        product *= num

    return (total_sum, product)