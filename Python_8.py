from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_ = sum(numbers)
    product = 1
    for num in numbers:
        product *= num
    return sum_, product