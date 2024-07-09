from typing import Tuple
from functools import reduce

def sum_product(numbers: list[int]) -> Tuple[int, int]:
    return (sum(numbers), 1 if not numbers else reduce(lambda x, y: x * y, numbers))