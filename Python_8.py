from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_val = sum(numbers)
    product_val = 1
    for num in numbers:
        product_val *= num
    return (sum_val, product_val)