from typing import List, Tuple
from functools import reduce

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (sum(numbers), numbers[0] if len(numbers) == 1 else reduce(lambda x, y: x * y, numbers))