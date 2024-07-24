```
from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return (0, 0)

    for num in numbers:
        if not isinstance(num, int):
            raise ValueError("Invalid input. All inputs must be integers.")

    total_sum = 0
    product = 1

    for num in numbers:
        total_sum += num
        product *= num

    return (total_sum, product)