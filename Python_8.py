from typing import List, Tuple


def sum_product(numbers: list[int]) -> tuple[int, int]:
    sum = 0
    product = 1
    for num in numbers:
        sum += num
        product *= num
    return sum, product