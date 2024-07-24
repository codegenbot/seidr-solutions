from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if numbers is None:
        return (0, 1)
    return (sum(numbers), 0 if 0 in numbers else 1)