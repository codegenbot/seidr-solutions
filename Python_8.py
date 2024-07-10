```Python
from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 1

    total_sum = 0
    product = 1

    for number in numbers:
        total_sum += number
        product *= number

    return total_sum, product