```
from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return (0, 1)
    else:
        total_sum = sum(numbers)
        total_product = 1
        for number in numbers:
            total_product *= number
        return (total_sum, total_product)