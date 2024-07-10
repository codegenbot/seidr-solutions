from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if len(numbers) == 0:
        return 0, 1
    return sum(numbers), eval("*".join(map(str, numbers)))