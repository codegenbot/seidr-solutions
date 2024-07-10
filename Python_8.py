from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_value = sum(numbers) if numbers else 0
    prod_value = 1
    for num in numbers:
        prod_value *= num
    return sum_value, prod_value