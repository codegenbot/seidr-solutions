from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_value = sum(numbers) if numbers else 0
    product_value = 1
    for num in numbers:
        product_value *= num
    return sum_value, product_value