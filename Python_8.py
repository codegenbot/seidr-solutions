from typing import List, Tuple
from functools import reduce
from operator import mul

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (sum(numbers), reduce(mul, numbers, 1))