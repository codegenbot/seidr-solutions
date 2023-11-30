from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    s = 0
    p = 1
    for num in numbers:
        s += num
        p *= num
    return s, p