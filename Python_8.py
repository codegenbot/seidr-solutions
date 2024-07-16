from typing import List, Tuple
from functools import reduce

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 1
    else:
        return sum(numbers), reduce(lambda x, y: x * y, numbers)