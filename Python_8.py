from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (sum(numbers), 0) if not numbers else (sum(numbers), 1)