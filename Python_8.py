```
from typing import List, Tuple

def sum_product_and_average(numbers: List[int]) -> Tuple[int, int, float]:
    if not isinstance(numbers, list):
        raise ValueError("Input must be a list")
    for num in numbers:
        if not isinstance(num, int):
            raise ValueError("List elements must be integers")

    total_sum = sum(numbers)
    product = 1
    for num in numbers:
        product *= num

    average = total_sum / len(numbers)

    return total_sum, product, average