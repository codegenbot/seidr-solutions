```
from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 1
    try:
        return sum(numbers), eval("*".join(map(str, numbers)))
    except (TypeError, ValueError):
        return "Invalid input. Please provide a list of integers."