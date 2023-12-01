from typing import List, Tuple

def sum_product(numbers: list[int]) -> tuple[int, int]:
    sum_val = 0
    product = 1
    for num in numbers:
        sum_val += num
        product *= num
    return sum_val, product