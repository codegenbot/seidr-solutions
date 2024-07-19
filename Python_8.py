from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return (0, 1)
    else:
        total_sum = sum(numbers)
        product = eval("*".join(map(str, numbers)))
        return (total_sum, product)