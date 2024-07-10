Here is the completed code:

from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (sum(numbers), *numbers) if numbers else (0, 1)