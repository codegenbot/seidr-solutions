```
from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1

    for num in numbers:
        if isinstance(num, int):
            total_sum += num
            product *= num
        else:
            return "Error: Input must be a list of integers."

    return (total_sum, product)