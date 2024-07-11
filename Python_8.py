```
from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if isinstance(numbers, tuple) and len(numbers) == 0:
        return (0, 1)
    elif not isinstance(numbers, list):
        return "Invalid Input"

    total_sum = 0
    product = 1

    for num in numbers:
        total_sum += num
        product *= num

    return (total_sum, product)