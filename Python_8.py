from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 1
    else:
        s = sum(numbers)
        p = 1
        for num in numbers:
            p *= num
        return s, p