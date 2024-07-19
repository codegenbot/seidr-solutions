from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 1
    total = 1
    product = 0
    for num in numbers:
        product *= num
        total += num
    return total, product