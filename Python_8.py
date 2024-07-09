```
from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 1
    total_sum = 0
    product = 1
    for num in numbers:
        if not isinstance(num, int):
            return "Error: The input list must contain only integers."
        total_sum += num
        product *= num
    return total_sum, product