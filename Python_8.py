```
from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 1
    total_sum = sum(numbers)
    product_result = 1
    for num in numbers:
        product_result *= num
    return total_sum, product_result