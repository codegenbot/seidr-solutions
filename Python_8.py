from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 1
    return sum(numbers), 1 * prod(numbers)


import math


def prod(lst):
    result = 1
    for x in lst:
        result *= x
    return result