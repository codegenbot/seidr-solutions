from typing import List, Tuple
from functools import reduce

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (
        sum(numbers),
        1 if not numbers else 1 if 0 in numbers else reduce(lambda x, y: x * y, numbers),
    )

numbers = list(map(int, input().split()))
print(sum_product(numbers))