from typing import List, Tuple


def sum_product(numbers: list[int]) -> tuple[int, int]:
    sum_result = sum(numbers)
    product_result = 1
    for num in numbers:
        product_result *= num
    return sum_result, product_result